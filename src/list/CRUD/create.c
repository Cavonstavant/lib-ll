#include <stdlib.h>
#include "ll.h"

/**
* @brief Create an empty list object
* 
* @return list_t* 
*/
list_t *create_list(void)
{
    list_t *new_list = malloc(sizeof(list_t));

    if (!new_list)
        return (NULL);
    new_list->head = NULL;
    new_list->tail = NULL;
    new_list->size = 0;
    return (new_list);
}
