#include "queue.h"

/**
* @brief returns NULL if queue is empty or if an error occured
* 
* @param queue 
* @return node_t* 
*/
node_t *dequeue(queue_t *queue)
{
    node_t *dequeued = NULL;

    if (!queue)
        return (dequeued);
    if (!queue->head)
        return (dequeued);
    dequeued = queue->tail;
    delete_node_at(queue, get_list_size(queue));
    return (dequeued);
}

/**
* @brief push a node on the queue and returns the new queue or NULL if it failed
* 
* @param queue
* @param node 
* @return queue_t* 
*/
queue_t *enqueue(queue_t *queue, node_t *node)
{
    if (!queue)
        return (NULL);
    return (insert_at(queue, node, 0));
}