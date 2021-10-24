#include <stdio.h>
#include "queue.h"

int main() {
    Queue* q = create_queue(5);
    dequeue(q);
    for(int i = 0; i < 6; i++)
        enqueue(q, i);
    for(int i = 0; i < 6; i++)
        dequeue(q);
    destroy_queue(q);
    return 0;
}
