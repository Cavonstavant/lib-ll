#include <criterion/criterion.h>
#include "ll.h"

Test(CRUD_TESTS, get_node_data)
{
    int test_int = 12;
    node_t *test_node_string = create_node("test");
    node_t *test_node_int = create_node(&test_int);
    
    cr_assert_str_eq((char*)get_node_data(test_node_string), "test");
    cr_assert_eq(*(int*)(get_node_data(test_node_int)), 12);
    free(test_node_string);
    free(test_node_int);
}

Test(CRUD_TESTS, get_prev_next)
{
    node_t *test_node = create_node("test");
    node_t *test_node_prev = create_node("test_prev");
    node_t *test_node_next = create_node("test_next");

    test_node->prev = test_node_prev;
    test_node->next = test_node_next;
    cr_assert_str_eq((char*)get_node_data(get_node_t_prev(test_node)), "test_prev");
    cr_assert_str_eq((char*)get_node_data(get_node_t_next(test_node)), "test_next");
}

Test(CRUD_TESTS, get_list_size)
{
    list_t *test_list = create_list();

    test_list->size = 3;
    cr_assert_eq(get_list_size(test_list), 3);
}

Test(CRUD_TESTS, get_node_at)
{
    list_t *test_list = create_list();
    node_t *test_node = create_node("test");
    node_t *test_node_prev = create_node("test_prev");
    node_t *test_node_next = create_node("test_next");

    test_node->prev = test_node_prev;
    test_node_prev->next = test_node;
    test_node->next = test_node_next;
    test_node_next->prev = test_node;
    test_list->head = test_node_prev;
    test_list->tail = test_node_next;
    test_list->size = 3;

    cr_assert_str_eq(get_node_data(get_node_at(test_list, 0)), "test_prev");
    cr_assert_str_eq(get_node_data(get_node_at(test_list, 1)), "test");
    cr_assert_str_eq(get_node_data(get_node_at(test_list, 2)), "test_next");
    cr_assert_null(get_node_at(test_list, 3));
}

Test(CRUD_TESTS, get_node_by_data)
{
    list_t *test_list = create_list();
    node_t *test_node = create_node("test");
    node_t *test_node_prev = create_node("test_prev");
    node_t *test_node_next = create_node("test_next");

    test_node->prev = test_node_prev;
    test_node_prev->next = test_node;
    test_node->next = test_node_next;
    test_node_next->prev = test_node;
    test_list->head = test_node_prev;
    test_list->tail = test_node_next;
    test_list->size = 3;
    cr_assert_not_null(get_node_by_data(test_list, "test_prev", strcmp));
    cr_assert_not_null(get_node_by_data(test_list, "test", strcmp));
    cr_assert_not_null(get_node_by_data(test_list, "test_next", strcmp));
    cr_assert_null(get_node_by_data(test_list, "azerqsdf", strcmp));
}