#include "stdio.h"

void swap(int *NumberA, int *NumberB)
{
    *NumberA = *NumberA + *NumberB;
    *NumberB = *NumberA - *NumberB;
    *NumberA = *NumberA - *NumberB;
}
