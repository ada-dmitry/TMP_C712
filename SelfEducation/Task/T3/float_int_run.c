#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float k;

    scanf("%d%f", &n1, &k);

    n2 = k * n1;

    printf("%d\n", abs(n2 - n1));

    return 0;
}