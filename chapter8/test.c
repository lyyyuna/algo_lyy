#include <stdio.h>
#include <countingsort.h>

#define SIZE 20

int main (void)
{
    int array[SIZE] = {13,19,9,5,12,8,7,10,21,2,0,11,26,59,18,62,54,32,59,12};
    int B[SIZE] = {0};
    int max = 0, i = 0;

    if (!(max = findmax(array, SIZE)))
    {
        printf("Counting sort is incompatible for negative\n");
        return -1;
    }
    printf("Before sorting\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    countingsort(array, B, SIZE, max);

    printf("After sorting \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", B[i]);
    }
    return 0;
  
}
