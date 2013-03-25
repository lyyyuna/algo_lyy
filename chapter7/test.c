#include <stdio.h>
#include <quicksort.h>

#define LENGTH 100

int main(void)
{
    int array[LENGTH];

    srand(time);

    int i = 0;

    for (i = 0; i < LENGTH; i++)
    {
        array[i] = rand()%100000 + 1;
    }
    printf("Original array is: \n");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    quicksort(array, 0, LENGTH-1);
    printf("Sorted array is: \n");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
