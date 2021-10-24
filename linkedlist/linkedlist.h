#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

struct Node {
    struct Node* next;
    int* value;
};

struct LinkedList {
    struct Node* head;
    struct Node* tail;
    int length;
};

struct LinkedList* create_ll();

#endif
