#include <stack.h>

int stack_init(stack *s, int size)
{
    if ((s->array = malloc(sizeof(int)*size)) != NULL)
    {
        s->index = -1;
        s->size = size;
        return 0;
    }
    else
    {
        printf("Failed, there is not enough space\n");
        return -1;
    }
}

int stack_empty(stack *s)
{
    if (s->index < 0)
        return 1;
    else
        return 0;
}

int stack_full(stack *s)
{
    if (s->index >= s->size)
        return 1;
    else 
        return 0;
}

static int stack_realloc(stack *s)
{
    if ((s->array = realloc(s->array, sizeof(int)*(s->size)*2)) != NULL)
    {
        s->size = (s->size)*2;
        return 1;
    }
    else return 0;
}

int push(stack *s, int x)
{
    if (stack_full(s))
    {
        if (stack_realloc(s))
        {
            s->index++;
            s->array[s->index] = x;
            return 0;
        }
        else 
        {
            printf("Failed, not enough space. \n");
            return -1;
        }
    }
    else 
    {
        s->index++;
        s->array[s->index] = x;
        return 0;
    }
}

int pop(stack *s)
{
    if (stack_empty(s))
    {
        printf("Failed, it is empty. \n");
        return -1;
    }
    else 
    {
        return s->array[s->index--];
    }
}

void stack_delete(stack *s)
{
    free(s->array);
    s->size = 0;
    s->index = -1;
    return;
}
