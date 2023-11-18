#include <stdio.h>

void mirror(int *px, int *py)
{
    *px = *px * (-1);
}

void mirror_seg(int *px1, int *py1, int *px2, int *py2)
{
    *py1 *= -1;
    *py2 *= -1;
}