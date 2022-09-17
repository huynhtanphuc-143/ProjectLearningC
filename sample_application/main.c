#include <stdio.h>
#include "Function.h"
#include "Cfg.h"
#include "Type.h"

int ArrayExample[] = {3, 5, 7, 9, 1, 2, 4, 6, 8, 0};
int LengOfArray = sizeof(ArrayExample)/sizeof(int);
int NumEngineer;

int main(void)
{
    //bubbleSort(ArrayExample, LengOfArray);
    insertionSort(ArrayExample, LengOfArray);
    //selectionSort(ArrayExample, LengOfArray);
    //reverse(ArrayExample, LengOfArray);
    print(ArrayExample, LengOfArray);

#if NAME == PHUC
    NumEngineer = ePHUC;
#elif NAME == NAM
    NumEngineer = eNAM;
#else
#error "Please update marco NAME."
#endif
    printf("\nAge of %d: %d", Engineer[NumEngineer].ID,
        Engineer[NumEngineer].age);
    printf("\nResult: %d", POW(2, 3));

    return 0;
}

//EOL
