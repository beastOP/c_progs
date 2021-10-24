#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "circular_queue.h"

Cq* create_cq(unsigned int capacity) {
    Cq* cq = (Cq*)malloc(sizeof(Cq));
    if(cq == NULL)
        exit(1);
    cq->front = cq->rear = -1;
    cq->capacity = capacity;
    cq->data = (int*)malloc(cq->capacity*sizeof(int));
    return cq;
}

int is_cq_full(Cq* cqueue) {
    if(
        (
         cqueue->front == 0 
         && cqueue->rear == cqueue->capacity -1
        )
        || (cqueue->rear+1 == cqueue->front)
      ) return 1;
    else return 0;
}

int is_cq_empty(Cq* cqueue) {
    if(cqueue->front == cqueue->rear && cqueue->rear == -1)
        return 1;
    else return 0;
}


int cq_enqueue(Cq* cqueue, int item) {
    if(is_cq_full(cqueue)) {
        printf("Error: queue is full!\n");
        return INT_MIN;
    } else {
        if(cqueue->rear == cqueue->capacity-1)
            cqueue->rear = -1;
        cqueue->data[++cqueue->rear] = item;
        return item;
    }
}

int cq_dequeue(Cq* cqueue) {
    if(is_cq_empty(cqueue)) {
        printf("Error: queue is empty!\n");
        return INT_MIN;
    } else if(cqueue->front == cqueue->rear) {
        int item = cqueue->data[cqueue->front];
        cqueue->front = cqueue->rear = -1;
        return item;
    } else {
        int item = cqueue->data[cqueue->front];
        if(cqueue->front == cqueue->capacity-1)
            cqueue->front = 0;
        return item;
    }
}

int cq_front(Cq* cqueue) {
    return cqueue->data[cqueue->front];
}

void cq_destroy(Cq* cqueue) {
    free(cqueue->data);
    free(cqueue);
}
