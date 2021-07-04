#ifndef QUEUE_H
#define QUEUE_H

#include "ll.h"

typedef list_t queue_t;

/* src/queue/queue.c */
node_t *dequeue(queue_t *);
queue_t *enqueue(queue_t *, node_t*);

#endif /* QUEUE_H */
