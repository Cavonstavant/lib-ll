#include "ll.h"

/**
* @brief set content of node with data
* 
* @param node 
* @param data 
* @return int error code 1 : node is NULL ; 2 : data is NULL ; 0 : success
*/
int update_node(node_t *node, void *data)
{
    if (!node)
        return (1);
    if (!data)
        return (2);
    node->data = data;
    return (0);
}