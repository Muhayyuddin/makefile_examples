#include "pthread_example.h"
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS 5
using namespace std; 

void *message(void *threadid)
{
   long tid;
   tid = (long)threadid;
   printf("Thread from message: creating thread #%ld!\n", tid);
   pthread_exit(NULL);
}
void parallel_messages::ThreadHandler ()
{
     pthread_t threads[NUM_THREADS];
   int rc;
   long t;
   for(t=0;t< NUM_THREADS;t++){
     printf("thread from main: creating thread %ld\n", t);
     rc = pthread_create(&threads[t], NULL, message, (void *)t);
     if (rc){
       printf("ERROR; return code from pthread_create() is %d\n", rc);
       exit(-1);
       }
     }
    pthread_exit(NULL); 
}
