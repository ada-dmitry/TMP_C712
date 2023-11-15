#include <stdio.h>

int main()
{
    int g1, g2, k1, k2, s1, s2, g, s, k, sum;

    scanf("%d%d%d", &g1, &s1, &k1);
    scanf("%d%d%d", &g2, &s2, &k2);

    sum = (g1 + g2) * 17 * 29 + (s1 + s2) * 29 + (k1 + k2);
    g = sum / (17 * 29);
    s = (sum - g * (17 * 29)) / 29;
    k = sum - g * (17 * 29) - s * 29;

    printf("%d %d %d\n", g, s, k);

    return 0;
}