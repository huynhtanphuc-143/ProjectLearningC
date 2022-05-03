#include <stdio.h>
#include "swap.h"

/*******************************************************************************
* Function:   print                                                            *
*                                                                              *
* Decription: Print array                                                      *
*******************************************************************************/

void print(int array[], int length)
{
    int i;
    
    for (i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}

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
    for (i = 1; i < length; i++)
    {
        j = i;
        while(j > 0 && array[j-1] > array[j])
        {
            swap(&array[j-1], &array[j]);
            j = j-1;
        }
    }
}

/*******************************************************************************
* Function:   selectionSort                                                    *
*                                                                              *
* Decription: Selection Sort                                                   *
*******************************************************************************/

void selectionSort(int array[], int length)
{
    int i, j;
    int iMin;
    
    for (j = 0; j < length-1; j++)
    {
        iMin = j;
        for (i = j+1; i < length; i++)
        {
            if(array[i] < array[iMin])
                iMin = i;
            if(iMin != j)
                swap(&array[j], &array[iMin]);
        }
    }
}

/*******************************************************************************
* Function:   reverse                                                          *
*                                                                              *
* Decription: Reverse array                                                    *
*******************************************************************************/

void reverse(int array[], int length)
{
    int low, high;
    
    for (low = 0, high = length - 1; low < high/2; low++, high--)
    {
        array[high] = array[low]  + array[high];
        array[low]  = array[high] - array[low];
        array[high] = array[high] - array[low];
    }
}

//EOL
