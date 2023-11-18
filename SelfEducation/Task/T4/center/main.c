#include <stdio.h>

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc);
void rotateC(int *x1, int *y1, int *x2, int *y2);

int main()
{
    int xlt, ylt, xrb, yrb, xc, yc;
    int *pxc = &xc, *pyc = &yc;

    scanf("%d%d%d%d", &xlt, &ylt, &xrb, &yrb);

    center(xlt, ylt, xrb, yrb, pxc, pyc);

    rotateC(&xlt, &ylt, &xrb, &yrb);

    printf("%d %d %d %d\n", xlt, ylt, xrb, yrb);

    return 0;
}