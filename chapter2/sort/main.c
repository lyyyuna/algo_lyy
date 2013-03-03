#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 50

#define SORT_TYPE 2

int main( void )
{
    srand(time(NULL));
    int array[LENGTH];
    unsigned int i = 0;

    for (i = 0; i < LENGTH; i++)
        array[i] = rand()%100000 + 1;

    printf("Original array is: \n");
    for (i = 0; i < LENGTH; i++)
        printf("%d  ", array[i]);

#if SORT_TYPE==1
    insertion_sort(array, LENGTH);
#else
    merge_sort(array, 0, LENGTH-1);
#endif

    printf("\nSorted array is: \n");
    for (i = 0; i < LENGTH; i++)
        printf("%d  ", array[i]);
    return 0;
}
