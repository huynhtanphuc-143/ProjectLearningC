#include "stdio.h"
#include "Function.h"
#include "swap.h"

int a[] = {1, 8, 3, 4, 9, 6, 7};
int leng = sizeof(a)/sizeof(int);

int main(void)
{
    bubbleSort(a, leng);

    int k;
    for (k = 0; k < 7; k++)
    {
        printf("%d ", a[k]);
    }

    return 0;
}
