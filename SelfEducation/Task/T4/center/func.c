#include <stdio.h>

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc)
{
    *pxc = (xlt + xrb) / 2;
    *pyc = (ylt + yrb) / 2;
}

void rotateC(int *x1, int *y1, int *x2, int *y2)
{
    int t1 = *x1, t2 = *x2;

    *x1 = *y2;
    *x2 = *y1;
    *y1 = t2;
    *y2 = t1;
}