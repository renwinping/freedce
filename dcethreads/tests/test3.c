/*
 * 
 * Question:
 *
 * Tests throwing a cancel in a TRY block.  
 *
 * The cancel exception must be caught in the inner TRY block.
 * Further, we catch the cancel in the outer try block to insure
 * that the cancel propagates up the stack. 
 *
 * 
 */


#include <dce/pthreads_rename.h>
#include <dce/pthread_exc.h>
#include <stdio.h>
#include <string.h>

EXCEPTION e1;

int main()
{

	printf ("test3:         raising a cancel in a TRY block\n");
	EXCEPTION_INIT(e1);
	TRY
	{
		TRY
		{
			printf (" in inner try block. Cancelling myself. \n");
			sys_pthread_cancel(sys_pthread_self());
			printf("\t... called pthread_cancel(). calling testcancel\n");
			sys_pthread_testcancel();
		}
		CATCH(e1)
		{
			printf("\t... in handler for e1. \n");
		}
		CATCH(pthread_cancel_e)
		{
			printf ("\t... in pthread_cancel_e inner handler\n");
			RERAISE;
		}
		ENDTRY
	}
	CATCH(e1)
	{
		printf("\t... in outer handler for e1.");
	}
	CATCH(pthread_cancel_e)
	{
		printf("\t... in outer handler for pthread_cancel_e\n");
	}
	ENDTRY

		printf("normal exiting. \n");
	return 0;
}
