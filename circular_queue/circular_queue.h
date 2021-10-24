#ifndef __CIRCULAR_QUEUE_H__
#define __CIRCULAR_QUEUE_H__

typedef struct CircularQueue {
    int front, rear;
    unsigned int capacity;
    int* data;
} Cq;

Cq* create_cq(unsigned int capacity);
int is_cq_full(Cq* cqueue);
int is_cq_empty(Cq* cqueue);
int cq_enqueue(Cq* cqueue, int item);
int cq_dequeue(Cq* cqueue);
int cq_front(Cq* cqueue);
void cq_destroy(Cq* cqueue);

#endif
