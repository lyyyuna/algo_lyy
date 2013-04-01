#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct Node_struct Node;
struct Node_struct
{
    int key;
    Node *prev;
    Node *next;
};

Node *list_init(int key);
int Node_insert(Node **Headptr, int key);
int Node_delete(Node **Headptr, int key);
Node *list_search(Node *Head, int key);
void list_print(Node *Head);
void list_delete(Node **Headptr);
#endif
