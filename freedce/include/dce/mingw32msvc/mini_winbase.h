#ifndef WINBASEAPI
#ifdef __W32API_USE_DLLIMPORT__
#define WINBASEAPI DECLSPEC_IMPORT
#else
#define WINBASEAPI
#endif
#endif

#define WINAPI __stdcall

typedef unsigned long DWORD;

typedef void *PVOID,*LPVOID;

typedef PVOID HANDLE;

typedef DWORD (WINAPI *LPTHREAD_START_ROUTINE)(LPVOID);

WINBASEAPI HANDLE WINAPI CreateThread(LPSECURITY_ATTRIBUTES,DWORD,LPTHREAD_START_ROUTINE,PVOID,DWORD,PDWORD);
WINBASEAPI DWORD WINAPI WaitForSingleObject(HANDLE,DWORD);
WINBASEAPI BOOL WINAPI CloseHandle(HANDLE);
WINBASEAPI BOOL WINAPI TerminateThread(HANDLE,DWORD);
WINBASEAPI DWORD WINAPI TlsAlloc(VOID);
WINBASEAPI BOOL WINAPI TlsFree(DWORD);
WINBASEAPI PVOID WINAPI TlsGetValue(DWORD);
WINBASEAPI BOOL WINAPI TlsSetValue(DWORD,PVOID);
WINBASEAPI DWORD WINAPI GetCurrentThreadId(void);
WINBASEAPI BOOL WINAPI ReleaseMutex(HANDLE);
#define CreateMutex CreateMutexW
#define CreateEvent CreateEventW
WINBASEAPI DWORD WINAPI SignalObjectAndWait(HANDLE,HANDLE,DWORD,BOOL);
WINBASEAPI BOOL WINAPI PulseEvent(HANDLE);
WINBASEAPI BOOL WINAPI SetEvent(HANDLE);
WINBASEAPI void WINAPI Sleep(DWORD);

WINBASEAPI HANDLE WINAPI CreateMutexW(LPSECURITY_ATTRIBUTES,BOOL,LPCWSTR);
WINBASEAPI HANDLE WINAPI CreateEventW(LPSECURITY_ATTRIBUTES,BOOL,BOOL,LPCWSTR);
