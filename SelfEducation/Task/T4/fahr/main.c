#include <stdio.h>

float fahr(int cel);
float celsius(int fahr);

int main()
{
    int cel;      // градусы Цельсия
    float f, ans; // градусы Фаренгейта

    scanf("%d", &cel);
    f = fahr(cel);
    printf("%.2f\n", f); // .2f - печатать с точностью до 2 знаков после .

    ans = celsius((int)f);
    printf("%.2f\n", ans);
    return 0;
}