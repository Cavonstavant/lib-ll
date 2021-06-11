#include <stdlib.h>
#include "ll.h"

/**
* @brief delete a list and it's content
* 
* @param list 
*/
void delete_list(list_t *list)
{
    if (!list)
        return;
    for (node_t *tmp = list->head; tmp; tmp = get_node_t_next(tmp))
        free(tmp);
    free(list);
}