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

void merge(int *array, int p, int q, int r)
{
    int arr_l[q-p+1], arr_r[r-q+1];
    int i, j, n1, n2, k;

    n1 = q-p+1;
    n2 = r-q;
    for (i = 0; i < n1; i++)
        arr_l[i] = array[p+i];
    for (j = 0; j < n2; j++)
        arr_r[j] = array[q+j+1];

    i = j = 0;
    for (k = p; k < r+1; k++)
    {
        if ((arr_l[i] <= arr_r[j] || j>=n2) && i<n1)
            array[k] = arr_l[i++];
        else
            array[k] = arr_r[j++];
    }
}

void merge_sort(int *array, int p, int r)
{
    int m = 0;

    if (p < r)
    {
        m = (p+r)/2;
        merge_sort(array, p, m);
        merge_sort(array, m+1, r);
        merge(array, p, m, r);
    }
}
