#include <stdlib.h>
#include "ll.h"

void delete_node(node_t *node)
{
    if (!node)
        return;
    free(node);
}