#ifndef __QUEUE_H__
#define __QUEUE_H__

typedef struct Queue {
    int front, rear, size;
    unsigned capacity;
    int* data;
} Queue;

Queue* create_queue(unsigned capacity);
int is_full(Queue* queue);
int is_empty(Queue* queue);
void enqueue(Queue* queue, int item);
int dequeue(Queue* queue);
int front(Queue* queue);
int rear(Queue* queue);
void destroy_queue(Queue* q);

#endif
