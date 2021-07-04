#include "stack.h"

/**
* @brief returns NULL if stack is empty or if an error occured
* 
* @param stack 
* @return node_t* 
*/
node_t *pop(stack_t *stack)
{
    node_t *popped = NULL;

    if (!stack)
        return (popped);
    if (!stack->head)
        return (popped);
    popped = stack->head;
    delete_node_at(stack, 0);
    return (popped);
}

/**
* @brief push a node on the stack and returns the new stack or NULL if it failed
* 
* @param stack
* @param node 
* @return stack_t* 
*/
stack_t *push(stack_t *stack, node_t *node)
{
    if (!stack)
        return (NULL);
    return (insert_at(stack, node, 0));
}