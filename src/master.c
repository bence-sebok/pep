#define EXERCISE 2

#ifndef EXERCISE
#error "EXERCISE should be defined!"
#else

#if   (EXERCISE == 1)
#include "01_hello_world.c"
#elif (EXERCISE == 2)
#include "02_suspend-resume.c"
#elif (EXERCISE == 3)
#include "03_time_delay.c"
#elif (EXERCISE == 4)
#include "04_time-slicing.c"
#elif (EXERCISE == 5)
#include "05_semaphore.c"
#elif (EXERCISE == 6)
#include "06_queue.c"
#elif (EXERCISE == 7)
#include "07_shared_resources.c"
#elif (EXERCISE == 8)
#include "08_priority_inversion.c"
#elif (EXERCISE == 9)
#include "09_software_timers.c"
#elif (EXERCISE == 10)
#include "10_interrupts.c"
#elif (EXERCISE == 11)
#include "11_event_flags.c"
#elif (EXERCISE == 12)
#include "12_task_notifications.c"
#elif (EXERCISE == 13)
#include "13_stack_overflow.c"
#elif (EXERCISE == 14)
#include "14_idle_hook.c"
#else
#error "Unknown exercise number!"
#endif

#endif
