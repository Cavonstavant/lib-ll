#include "ll.h"

/**
* @brief data getter from node_t
* 
* @param node 
* @return void* 
*/
void *get_node_data(const node_t *node)
{
    if (!node)
        return (NULL);
    return (node->data);
}

/**
* @brief next getter from node_t
* 
* @param node 
* @return node_t* 
*/
node_t *get_node_t_next(const node_t *node)
{
    if (!node)
        return (NULL);
    return (node->next);
}

/**
* @brief prev getter from node_t
* 
* @param node 
* @return node_t* 
*/
node_t *get_node_t_prev(const node_t *node)
{
    if (!node)
        return (NULL);
    return (node->prev);
}