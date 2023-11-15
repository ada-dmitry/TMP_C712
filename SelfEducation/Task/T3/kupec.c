#include <stdio.h>
#define x 106

int main()
{
    int rub, kop, rest, n;

    scanf("%d%d", &rub, &kop);

    n = (rub * 100 + kop) / x;
    rest = (rub * 100 + kop) - n * x;

    printf("%d %d\n", n, rest);

    return 0;
}