#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int *array;
    int tail;
    int head;
    int size;
    int elements;
}queue;

extern int queue_init(queue *Q, int size);
extern void queue_enter(queue *Q, int x);
extern int queue_delete(queue *Q);
extern void queue_destroy(queue *Q);

#endif
