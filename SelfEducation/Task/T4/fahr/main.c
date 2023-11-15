#include <stdio.h>
#include "func.c"

float fahr(int cel);

int main()
{
    int cel; // градусы Цельсия
    float f; // градусы Фаренгейта

    scanf("%d", &cel);
    f = fahr(cel);
    printf("%.2f\n", f); // .2f - печатать с точностью до 2 знаков после .

    return 0;
}