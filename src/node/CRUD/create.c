#include <stdlib.h>
#include "ll.h"

node_t *create_node(void *data)
{
    node_t *new_node;

    if (!data)
        return (NULL);
    if (!(new_node = malloc(sizeof(node_t))))
        return (NULL);
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return (new_node);
}