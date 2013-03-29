#include <queue.h>

int queue_init(queue *Q, int size)
{
    if ((Q->array = malloc(sizeof(int)*size)) != NULL)
    {
        Q->tail = size-1;
        Q->head = size-1;
        Q->size = size;
        Q->elements = 0;
        return 0;
    }
    else{
        printf("Failed, not enough space. \n");
        return -1;
    }
}

void queue_enter(queue *Q, int x)
{
    if (Q->elements == Q->size )
    {
        printf("\n queue overflow \n");
        return ;
    }
    else{
        Q->array[Q->tail] = x;
        Q->elements ++;
        if (Q->tail+1 == Q->size)
        {
            Q->tail = 0;
            return ;
        }
        else {
            Q->tail ++;
            return ;
        }   
    }
}

int queue_delete(queue *Q)
{
    int x = 0;
    if (Q->elements == 0)
    {
        printf("\n There is no elements.  \n");
        return -1;
    }
    else{
        if (Q->head+1 == Q->size) /* wrap around*/
        {
            x = Q->array[Q->head];
            Q->head = 0;
            Q->elements --;
            return x;
        }
        else{
            Q->elements --;
            return Q->array[Q->head ++];
        }
    }
}

void queue_destroy(queue *Q)
{
    free(Q->array);
    Q->head = Q->tail = Q->elements = 0;
    return ;
}
