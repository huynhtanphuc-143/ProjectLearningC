#include "stdio.h"
#include "swap.h"

void bubbleSort(int array[], int length)
{
    int i, j;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

