#ifndef STACK_H
#define STACK_H

#include "ll.h"

typedef list_t stack_t;

/* src/stack/stack.c */
node_t *pop(stack_t *);
stack_t *push(stack_t *, node_t*);

#endif /* STACK_H */
