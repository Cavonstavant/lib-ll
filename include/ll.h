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

/* src/node/CRUD/create.c */
node_t *create_node(void *data);

/* src/node/CRUD/delete.c */
void delete_node(node_t *node);

/* src/node/CRUD/update.c */
int update_node(node_t *node, void *data);

/* src/node/CRUD/read.c */
void *get_node_data(const node_t *node);
node_t *get_node_t_next(const node_t *node);
node_t *get_node_t_prev(const node_t *node);

/* src/node/cmp_node.c */
int cmp_node(node_t *ref, node_t *candidate, int (*cmp)(void *, void *));

/* src/list/CRUD/create.c */
list_t *create_list(void);

/* src/list/CRUD/delete.c */
void delete_list(list_t *list);

/* src/list/CRUD/read.c */
size_t get_list_size(list_t *list);
node_t *get_node_at(list_t *list, node_t *node, const int index);
node_t *get_node_by_data(list_t *list,
                        const void *data,
                        int (*cmp)(void *ref, void *data));

/* src/list/CRUD/update.c */
list_t *insert_at(list_t *list, node_t *node, const int index);
size_t update_list_size(list_t *list, const size_t new_size);
#define increment_list_size(list) (update_list_size(list, get_list_size(list) + 1))
list_t *sort_list(list_t *list);
size_t list_index_of(list_t *list, node_t *node, int (*cmp)(void *, void *));


#endif /* LL_H */
