#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

Queue* create_queue(unsigned capacity) {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->capacity = capacity;
    q->front = q->size = 0;
    q->rear = capacity - 1;
    q->data = (int*)malloc(q->capacity*sizeof(int));
    return q;
}

int is_full(Queue* q) {
    return q->capacity == q->size ? 1 : 0;
}

int is_empty(Queue* q) {
    return q->size == 0 ? 1 : 0;
}

void enqueue(Queue* q, int item) {
    if(is_full(q)) {
        printf("Queue is full!\n");
        return;
    }
    q->rear = (q->rear + 1) % q->capacity;
    q->data[q->rear] = item;
    q->size++;
    printf("Enqueued %i\n", item);
}

int dequeue(Queue* q) {
    if(is_empty(q)){
        printf("Queue is empty!\n");
        return 0;
    }
    int item = q->data[q->front];
    q->front = (q->front+1) %  q->capacity;
    q->size--;
    printf("Dequeued %i\n", item);
    return item;
}

int front(Queue* q) {
    return q->data[q->front];
}

int rear(Queue* q) {
    return q->data[q->rear];
}

void destroy_queue(Queue* q) {
    if(q == NULL) {
        free(q);
        return;
    }
    free(q->data);
    free(q);
}

