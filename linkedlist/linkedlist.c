#include <stdlib.h>
#include "linkedlist.h"

struct LinkedList* create_ll() {
    struct LinkedList* ll = (struct LinkedList*)malloc(sizeof(struct LinkedList));
    ll->head = NULL;
    ll->tail = NULL;
    ll->length = 0;
    return ll;
}

struct Node* create_node(int* item) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node)); ;
    node->next = NULL;
    node->value = item;
    return node;
}

void insert(struct LinkedList* ll, struct Node* node) {
    if(ll->length == 0) {
        ll->head = node;
        ll->tail = node;
    } else {
        // if you don't consider tail
        // struct Node* ptr = ll->head;
        // while(ptr->next != NULL)
        //     ptr = ptr->next;
        // ptr->next = node;
        struct Node* temp = ll->tail;
        temp->next = node;
        ll->tail = node;
    }
    ll->length++;
}
