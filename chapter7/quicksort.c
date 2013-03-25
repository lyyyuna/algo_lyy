#include "quicksort.h"

int partition(int *array, int p, int r)
{
   int i = p-1;
   int j = 1;
   int temp = 0;

   for (j = p; j < r; j++)
   {
        if (array[j] <= array[r])
        {
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
   }
   i++;
   temp = array[i];
   array[i] = array[r];
   array[r] = temp;
   return i;
}

void quicksort(int *array, int p, int r)
{
    int m = 0;
    if (p < r)
    {
        m = partition(array, p, r);
        quicksort(array, p, m-1);
        quicksort(array, m+1, r);
    }   
}
