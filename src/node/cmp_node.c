#include "ll.h"

/**
* @brief use the cmp function to compare the data from 2 nodes
* and returns it's value
*
* @param ref 
* @param candidate 
* @param cmp 
* @return int
*/
int cmp_node(node_t *ref, node_t *candidate, int (*cmp)(void *, void *))
{
    if (!ref || !candidate)
        return (-1);
    return (cmp(ref->data, candidate->data));
}