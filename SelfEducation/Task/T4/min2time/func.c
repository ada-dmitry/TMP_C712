#include <stdio.h>

void min2time(int mm, int *ph, int *pm)
{
    *ph = (mm / 60) % 24;
    *pm = (mm - ((mm / 60) % 24) * 60) % 60;
}