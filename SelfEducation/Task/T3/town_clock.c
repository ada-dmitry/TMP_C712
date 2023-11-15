#include <stdio.h>

int main()
{
    int Bell, nBell;

    scanf("%d%d", &Bell, &nBell);

    int sum_arifm_seq = (Bell + nBell) * (nBell - Bell + 1) / 2;

    printf("%d\n", sum_arifm_seq);

    return 0;
}