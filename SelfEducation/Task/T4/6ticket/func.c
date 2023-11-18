#include <stdio.h>
#include <math.h>
#define N 6

void print_revers(int x)
{
    int res = 0;
    int *p_res = &res;
    for (int i = N - 1; i > -1; i--)
    {
        res += (x / (int)pow(10, i)) * (int)pow(10, (N - 1 - i));
        x = x % (int)pow(10, i);
        printf("%d | %d\n", x, res);
    }

    printf("%d %ls\n", res, p_res);
}