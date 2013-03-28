#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int *array;
    int index;
    int size;
}stack;

extern int stack_init(stack *s, int size);
extern int stack_empty(stack *s);
extern int stack_full(stack *s);
/* extern int stack_realloc(stack *s); */
extern int push(stack *s, int x);
extern int pop(stack *s);
extern void stack_delete(stack *s);

#endif
