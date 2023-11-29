#include <pthread.h>
#ifndef __MY_THREAD_POOL_H
#define __MY_THREAD_POOL_H

typedef struct tpool {
  // TODO: define your structure
} tpool;

tpool *tpool_init(int n_threads);
void tpool_add(tpool *, void *(*func)(void *), void *);
void tpool_wait(tpool *);
void tpool_destroy(tpool *);

#endif