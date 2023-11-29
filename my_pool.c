#include "my_pool.h"
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void tpool_add(tpool *pool, void *(*func)(void *), void *arg) {
  // TODO
}

void tpool_wait(tpool *pool) {
  // TODO
}

void tpool_destroy(tpool *pool) {
  // TODO
}

tpool *tpool_init(int n_threads) {
  // TODO
}