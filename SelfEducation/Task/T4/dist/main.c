#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2);
float area_geron(int x1, int y1, int x2, int y2, int x3, int y3);

int main()
{
    int x1, y1, x2, y2, x3, y3; // координаты точек
    float len, area;            // длина

    scanf("%d%d", &x1, &y1); // прочитали числа
    scanf("%d%d", &x2, &y2);
    scanf("%d%d", &x3, &y3);

    area = area_geron(x1, y1, x2, y2, x3, y3);

    printf("%.3f\n", area);

    return 0;
}