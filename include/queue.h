#ifndef QUEUE_H
#define QUEUE_H

#include "ll.h"

typedef list_t queue_t;

/* src/queue/queue.c */
node_t *pop(queue_t *);
queue_t *push(queue_t *, node_t*);

#endif /* QUEUE_H */
