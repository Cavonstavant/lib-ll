#include "ll.h"


size_t update_list_size(list_t *list, const size_t new_size)
{
    if (!list || new_size < 0)
        return (-1);
    list->size = new_size;
    return (new_size);
}

static list_t *insert_inside(list_t *list, node_t *node, const int index)
{
    node_t *tmp = list->head;
    node_t *stock = NULL;

    for (int i = 0; tmp->next && i < index; i++){
        stock = tmp;
        tmp = tmp->next;
    }
    stock->next = node;
    node->next = tmp;
    return (list);
}

/**
* @brief insert given node at index
* 
* @param list 
* @param node 
* @param index 
* @return list_t* 
*/
list_t *insert_at(list_t *list, node_t *node, const int index)
{
    node_t *tmp;
    int starting_from_end;

    if (!list)
        return (NULL);
    if (!node)
        return (list);
    if (index == get_list_size(list)){
        list->tail = node;
        increment_list_size(list);
        return (list);
    }
    if (index == 0){
        node->next = list->head;
        list->head = node;
        increment_list_size(list);
        return (list);
    }
    return (insert_inside(list, node, index));
}