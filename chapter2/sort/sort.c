#include "sort.h"

void insertion_sort(int *array, int size)
{
    int i = 0, j = 0, key = 0;

    for (j = 1; j < size; j++)
    {
        key = *(array+j);
        /* Insert array[j] into the sorted sequence array[0..j-1]*/
        i = j-1;
        while (i>=0 && *(array+i)>key)
        {
            *(array+i+1) = *(array+i);
            i--;
        }
        *(array+i+1) = key;
    }
}
