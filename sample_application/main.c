#include <stdio.h>
#include "Function.h"
#include "swap.h"

int a[] = {3, 5, 7, 9, 1, 2, 4, 6, 8, 0};
int leng = sizeof(a)/sizeof(int);

int main(void)
{
    //bubbleSort(a, leng);
    insertionSort(a, leng);
    //selectionSort(a, leng);
    
    //reverse(a, leng);
    print(a, leng);
    
    return 0;
}

//EOL
