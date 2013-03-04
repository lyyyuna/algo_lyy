#include "heap.h"

#define LEFT(i) 2*i+1
#define RIGHT(i) 2*i+2

static void max_heapify(int *array, int heap_size, int i)
{
    int largest = i;
    int temp = 0;

    if ((array[LEFT(i)]>=array[i]) && (LEFT(i)<heap_size))
    {
        largest = LEFT(i);
    }
    /* the array[largest] */
    if ((array[RIGHT(i)]>=array[largest]) && (RIGHT(i)<heap_size))
    {
        largest = RIGHT(i);
    }

    if (largest != i)
    {
        temp = array[i];
        array[i] = array[largest];
        array[largest] = temp;
        max_heapify(array, heap_size, largest);
    }
}

static void build_max_heap(int *array, int size)
{
    int i = 0;

    for (i = (size/2-1); i>=0; i--)
    {
        max_heapify(array, size, i);
    }
}

void heapsort(int *array, int size)
{
    int i = 0;
    int temp = 0;

    build_max_heap(array, size);

    for (i = size-1; i>=0; i--)
    {
        temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        max_heapify(array, i, 0);
    }
}
