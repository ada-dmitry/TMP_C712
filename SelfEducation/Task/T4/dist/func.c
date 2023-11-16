#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float dist(int x1, int y1, int x2, int y2)
{
    float res, a, b;

    a = abs(x1 - x2);
    b = abs(y1 - y2);
    res = sqrt(a * a + b * b);

    return res;
}

float area_geron(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float res, p, a, b, c;

    a = dist(x1, y1, x2, y2);
    b = dist(x2, y2, x3, y3);
    c = dist(x1, y1, x3, y3);

    p = (a + b + c) / 2;

    res = sqrt(p * (p - a) * (p - b) * (p - c));

    return res;
}