#include <stdio.h>

float fahr(int cel)
{
    float res;

    res = (float)cel * 9 / 5 + 32;

    return res;
}

float celsius(int fahr)
{
    float res;

    res = ((float)fahr - 32) * 5 / 9;

    return res;
}