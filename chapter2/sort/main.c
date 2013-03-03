#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 50

#define SORT_TYPE 1

int main( void )
{
    srand(time(NULL));
    int array[LENGTH];
    unsigned int i = 0;

    for (i = 0; i < LENGTH; i++)
        array[i] = rand()%100000 + 1;

    printf("Original array is: \n");
    for (i = 0; i < LENGTH; i++)
        printf("%d   ", array[i]);

#if SORT_TYPE==1
    insertion_sort(array, LENGTH);
#elif SORT_TYPE==2
    reverse_insertion_sort(array, sizeof array /(int)sizeof(int));
#elif SORT_TYPE==3
    insertion_sort(array, sizeof array /(int)sizeof(int));
#else
    merge_sort(array, 0, LENGTH-1);
#endif

    printf("Sorted array is: \n");
    for (i = 0; i < LENGTH; i++)
        printf("%d   ", array[i]);
    return 0;
}
