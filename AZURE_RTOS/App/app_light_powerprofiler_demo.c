#include "app_light_powerprofiler_demo.h"

TX_THREAD thread;

void my_thread_entry_function(ULONG initial_input);

UINT app_light_powerprofiler_demo_start(TX_BYTE_POOL *memory_pool)
{
  UINT ret = TX_SUCCESS;
  TX_BYTE_POOL *byte_pool = (TX_BYTE_POOL*)memory_pool;

  /* USER CODE BEGIN demo app */
  
  
/* Allocate stack for the thread */
ULONG stack_size = 2*1024; // Set the desired stack size
VOID *stack_memory = NULL;
ret = tx_byte_allocate(byte_pool, &stack_memory, stack_size, TX_NO_WAIT);
if (ret != TX_SUCCESS) {
    // Handle error
    return ret;
}

/* Create the thread */

ret = tx_thread_create(&thread, "MyThread", my_thread_entry_function, 0,
                                             stack_memory, stack_size, 1, 1, TX_NO_TIME_SLICE,
                                             TX_AUTO_START);
if (ret != TX_SUCCESS) {
    // Handle error
    tx_byte_release(stack_memory);
    return ret;
}


  /* USER CODE END demo app */

  return ret;
}

void my_thread_entry_function(ULONG initial_input)
{
    /* This is the function that will be executed when the thread is started.
       You can put your thread logic here. */

    /* For now, let's just print a message indicating that the thread has started. */
    printf("Thread has started with initial input: %lu\n", initial_input);
    
    int test_counter=0;

    //Wait such that all resources are initialized
    tx_thread_sleep(2000);
    /* Since this is a thread function, it should have a loop that keeps it running. */
    while (1)
    {
        /* Put your thread logic here. */
        printf("Thread is running. Counter: %d\r\n", test_counter++);
        /* For now, let's just have a delay in the loop. */
        tx_thread_sleep(100); // Sleep for 1000 ticks
    }
}
