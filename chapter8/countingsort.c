#include "countingsort.h"

int findmax(int *array, int size)
{
    int max = 0;
    int i = 0;

    for (i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < 0)
            return 0;
    }
    return max;
}

void countingsort(int *array, int *sorted, int size, int max)
{
    int maxarray[max+1];
    int i = 0;

    for (i = 0; i < max+1; i++)
    {
        maxarray[i] = 0;
    }

    for (i = 0; i < size; i++)
    {
        maxarray[array[i]]++;
    }
    
    for (i = 1; i < max+1; i++)
    {
        maxarray[i] = maxarray[i] + maxarray[i-1];
    }

    for (i = size-1; i >= 0; i--)
    {
        sorted[maxarray[array[i]]-1] = array[i];
        maxarray[array[i]]--;
    }
    return ;
}

