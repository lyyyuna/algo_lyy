#include "heap.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 10
int array[LENGTH] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
int main(void)
{
    srand(time(NULL));

    int i = 0;
/*
    for (i = 0; i < LENGTH; i++)
    {
        array[i] = rand()%100000 + 1;
    }
*/
    printf("Original array is: \n");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%d  ", array[i]);
    }

    heapsort(array, LENGTH);

    printf("\nSorted array is: \n");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%d  ", array[i]);
    }

    return 0;
}
