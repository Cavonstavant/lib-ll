#include <criterion/criterion.h>
#include "ll.h"

Test(CRUD_TESTS, update_node)
{
    int test1 = 123;
    int test1_2 = 321;
    long test2 = 1029837120;
    long test2_2 = 1231231231231;

    node_t *test_node_string = create_node("test");
    node_t *test_node_int = create_node(&test1);
    node_t *test_node_long = create_node(&test2);

    update_node(test_node_string, "azer");
    update_node(test_node_int, &test1_2);
    update_node(test_node_long, &test2_2);

    cr_assert_str_eq((char *)get_node_data(test_node_string), "azer");
    cr_assert_eq(*(int *)get_node_data(test_node_int), 321);
    cr_assert_eq(*(long *)get_node_data(test_node_long), 1231231231231);
}