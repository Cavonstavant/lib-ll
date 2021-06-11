#ifndef LL_H
#define LL_H

#include <stddef.h>

typedef struct node_s {
    void *data;
    struct node_s *prev;
    struct node_s *next;
} node_t;

typedef struct list_s {
    node_t *head;
    node_t *tail;
    size_t size;
} list_t;

node_t *create_node(void *data);
void delete_node(node_t *node);
int update_node(node_t *node, void *data);
void *get_node_data(const node_t *node);
node_t *get_node_t_next(node_t *node);
node_t *get_node_t_prev(node_t *node);
int cmp_node(node_t *ref, node_t *candidate, int (*cmp)(void *, void *));

list_t *create_list(void);
void delete_list(list_t *list);
list_t *insert_at(list_t *list, node_t *node, const int index);
node_t *get_node_at(list_t *list, node_t *node, const int index);
node_t *get_node_by_data(list_t *list,
                        const void *data,
                        int (*cmp)(void *, void *));
list_t *sort_list(list_t *list);
size_t list_index_of(list_t *list, node_t *node, int (*cmp)(void *, void *));


#endif /* LL_H */
