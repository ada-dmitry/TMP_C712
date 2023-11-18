#include <stdio.h>

void swap(int *px, int *py)
{
    int t;

    t = *px;
    *px = *py;
    *py = t;

    return;
}
