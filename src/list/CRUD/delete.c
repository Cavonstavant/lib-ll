#include <stdlib.h>
#include "ll.h"

static void delete_inside(list_t *list, int index)
{
    node_t *tmp = get_node_at(list, index);
    node_t *stock = tmp->prev;

    stock->next = tmp->next;
    free(tmp);
}

/**
* @brief delete a node at given index, doesn't do anything if operation fails
* 
* @param list 
* @param index 
*/
void delete_node_at(list_t *list, int index)
{
    node_t *tmp;

    if (!list)
        return;
    if (index > get_list_size(list))
        return;
    if (index == 0){
        tmp = get_node_at(list, 1);
        free(get_node_at(list, 0));
        list->head = tmp;
        return;
    }
    if (index == get_list_size(list)){
        tmp = list->tail;
        list->tail->prev->next = NULL;
        free(tmp);
        return;
    }
    return (delete_inside(list, index));
}

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