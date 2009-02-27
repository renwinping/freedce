#ifndef _PTHREADS_RENAME_H
#define _PTHREADS_RENAME_H

#define sys_pthread_equal                  (pthd4exc_equal)
#define sys_pthread_create                 (pthd4exc_create)
#define sys_pthread_detach                 (pthd4exc_detach)
#define sys_pthread_exit                   (pthd4exc_exit)
#define sys_pthread_join                   (pthd4exc_join)
#define sys_pthread_self                   (pthd4exc_self)
#define sys_pthread_setspecific            (pthd4exc_setspecific)
#define sys_pthread_getspecific            (pthd4exc_getspecific)
#define sys_pthread_setprio                (pthd4exc_setprio)
#define sys_pthread_getprio                (pthd4exc_getprio)
#define sys_pthread_setscheduler           (pthd4exc_setscheduler)
#define sys_pthread_getscheduler           (pthd4exc_getscheduler)
#define sys_pthread_yield                  (pthd4exc_yield)
#define sys_pthread_once                   (pthd4exc_once)
#define sys_pthread_delay_np               (pthd4exc_delay_np)
#define sys_pthread_key_create              (pthd4exc_key_create)
#define sys_pthread_setcancel              (pthd4exc_setcancel)
#define sys_pthread_setasynccancel         (pthd4exc_setasynccancel)
#define sys_pthread_cancel                 (pthd4exc_cancel)
#define sys_pthread_testcancel             (pthd4exc_testcancel)
#define sys_pthread_get_expiration_np      (pthd4exc_get_expiration_np)
#define sys_pthread_get_unique_np          (pthd4exc_getunique_np)
#define sys_pthread_getunique_np           (pthd4exc_getunique_np) 
#define sys_pthread_signal_to_cancel_np    (pthd4exc_signal_to_cancel_np)
#define sys_pthread_is_multithreaded_np    (pthd4exc_is_multithreaded_np)

#define sys_pthread_cond_init              (pthd4exc_cond_init)
#define sys_pthread_cond_destroy           (pthd4exc_cond_destroy)
#define sys_pthread_cond_signal            (pthd4exc_cond_signal)
#define sys_sys_pthread_cond_signal_int_np     (pthd4exc_cond_signal_int_np)
#define sys_pthread_cond_broadcast         (pthd4exc_cond_broadcast)
#define sys_pthread_cond_wait              (pthd4exc_cond_wait)
#define sys_pthread_cond_timedwait         (pthd4exc_cond_timedwait)
#define sys_pthread_condattr_create        (pthd4exc_condattr_create)
#define sys_pthread_condattr_delete        (pthd4exc_condattr_delete)

#define sys_pthread_lock_global_np         (pthd4exc_lock_global_np)
#define sys_pthread_unlock_global_np       (pthd4exc_unlock_global_np)

#define sys_pthread_attr_create            (pthd4exc_attr_create)
#define sys_pthread_attr_delete            (pthd4exc_attr_delete )
#define sys_pthread_attr_setstacksize      (pthd4exc_attr_setstacksize)
#define sys_pthread_attr_getstacksize      (pthd4exc_attr_getstacksize)
#define sys_pthread_attr_getprio           (pthd4exc_attr_getprio)
#define sys_pthread_attr_setprio           (pthd4exc_attr_setprio)
#define sys_pthread_attr_getsched          (pthd4exc_attr_getsched)
#define sys_pthread_attr_setsched          (pthd4exc_attr_setsched)
#define sys_pthread_attr_getinheritedsched (pthd4exc_attr_getinheritedsched)
#define sys_pthread_attr_setinheritedsched (pthd4exc_attr_setinheritedsched)
#define sys_pthread_attr_getguardsize_np   (pthd4exc_attr_getguardsize_np)
#define sys_pthread_attr_setguardsize_np   (pthd4exc_attr_setguardsize_np)

#define sys_pthread_attr_default          (pthread4_attr_default)
#define sys_pthread_mutexattr_default     (pthread4_mutexattr_default)
#define sys_pthread_condattr_default      (pthread4_condattr_default)



#endif
