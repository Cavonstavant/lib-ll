#include <criterion/criterion.h>
#include "ll.h"

Test(CRUD_TESTS, create)
{
    list_t *test_list = create_list();
    node_t *test_node = create_node("test");
    
    free(test_list);
    free(test_node);
}