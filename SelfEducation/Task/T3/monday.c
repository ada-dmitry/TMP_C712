#include <stdio.h>

int main()
{
    int day, n, ans;

    scanf("%d%d", &n, &day);

    ans = (n - day) / 7 + 1;

    printf("%d\n", ans);

    return 0;
}