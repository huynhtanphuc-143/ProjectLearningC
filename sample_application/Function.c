#include "swap.h"

/*******************************************************************************
* Function:   bubbleSort                                                       *
*                                                                              *
* Decription: Bubble Sort                                                      *
*******************************************************************************/

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

/*******************************************************************************
* Function:   insertionSort                                                    *
*                                                                              *
* Decription: Insertion Sort                                                   *
*******************************************************************************/

void insertionSort(int array[], int length)
{
    int i, j;
    for (i = 1; i <= length-1; i++)
    {
        j = i;
        while(j > 0 && array[j-1] > array[j])
        {
            swap(&array[j-1], &array[j]);
            j = j-1;
        }
    }
}
