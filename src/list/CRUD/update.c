#include "ll.h"


size_t update_list_size(list_t *list, const size_t new_size)
{
    if (!list || new_size < 0)
        return (-1);
    list->size = new_size;
    return (new_size);
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

    if (!list)
        return (NULL);
    if (!node)
        return (list);
    if (index == get_list_size(list)){
        list->tail = node;
        increment_list_size(list);
        return (list);
    }
    tmp = (index > list->size / 2) ? list->tail : list->head;
    //TODO see if we need to traverse the LL backward or foreward then insert
}