#include <list.h>

Node *list_init(int key)
{
    Node *Head = NULL;
    if ((Head = malloc(sizeof(Node))) == NULL)
    {
        printf("\n Falied, not enough space. \n");
        return NULL;
    }
    Head->key = key;
    Head->next = NULL;
    Head->prev = NULL;
    return Head;
}

int Node_insert(Node **Headptr, int key)
{
    Node *new_Head = NULL;
    /* check if it is empty*/
    if (*Headptr == NULL)
    {
        printf("The list has not been initialized.\n");
        return 1;
    }
    if ((new_Head = malloc(sizeof(Node))) == NULL)
    {
        printf("Failed, not enough space. \n");
        return 1;
    }
    else {
        new_Head->key = key;
        new_Head->prev = NULL;
        new_Head->next = *Headptr;
        (*Headptr)->prev = new_Head;
        *Headptr = new_Head;
        return 0;
    }
}

int Node_delete(Node **Headptr, int key)
{
    Node *scan = (*Headptr)->next;
    if (*Headptr == NULL)
    {   
        printf("Failed, it is empty.\n");
        return 1;
    }   
    if ((*Headptr)->key == key)
    {
        /* the deleted node is the head 
         * so the head must be changed */
        scan = *Headptr;
        *Headptr = (*Headptr)->next;
        (*Headptr)->prev = NULL;
        free(scan);
        return 0;
    }
    while (scan != NULL && scan->key != key)
    {
        scan = scan->next;
    }
    if (scan) /* the key has been found. */
    {
        (scan->prev)->next = scan->next;
        (scan->next)->prev = scan->prev;
        free(scan);
        return 0;
    }
    else {
        printf("the key %d is not founf in list. \n", key);
        return 0;
    }
}

Node *list_search(Node *Head, int key)
{
    Node *scan = Head;
    while(scan != NULL && scan->key != key)
    {
        scan = scan->next;
    }

    if (scan)
    {
        return scan;
    }
    else {
        printf("the key %d is not founf in list. \n", key);
    }
}

void list_print(Node *Head)
{
    Node *scan = Head;
    while (scan != NULL)
    {
        printf("%d ", scan->key);
        scan = scan->next;
    }
    return ;
}

void list_delete(Node **Headptr)
{
    Node *scan = (*Headptr)->next;
    Node *temp = NULL;
    while(scan != NULL)
    {
        temp = scan->next;
        free(scan);
        scan = temp;
    }
    return ;
}
