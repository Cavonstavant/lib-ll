#include "ll.h"

/**
* @brief Get the node at given index
* 
* @param list 
* @param node 
* @param index 
* @return node_t* - the node found in list, NULL if not found
*/
node_t *get_node_at(list_t *list, const int index)
{
    node_t *tmp;

    if (!list || index < 0)
        return (NULL);
    if (index >= list->size)
        return (NULL);
    tmp = list->head;
    for (int i = 0; i < index; i++){
        if (!tmp)
            return (NULL);
        tmp = get_node_t_next(tmp);
    }
    return (tmp);
}

/**
* @brief Get the node with given data and compare function
* 
* @param list 
* @param data 
* @param cmp must return 0 if both parameters are equals
* @return node_t* - the node found in list, NULL if not found or if data is NULL
*/
node_t *get_node_by_data(list_t *list,
void *data,
int (*cmp)(void *ref, void *data))
{
    if (!list)
        return (NULL);
    for (node_t *tmp = list->head; tmp; tmp = get_node_t_next(tmp))
        if (!cmp(data, tmp->data))
            return (tmp);
    return (NULL);
}

/**
* @brief Get the list size
* 
* @param list 
* @return size_t 
*/
size_t get_list_size(list_t *list)
{
    if (!list)
        return (0);
    return (list->size);
}