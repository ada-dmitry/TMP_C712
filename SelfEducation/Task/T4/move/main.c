#include <stdio.h>

void move(int *px, int *py, int dx, int dy);

int main()
{
    int x, y, dx, dy;
    int *px = &x, *py = &y;

    scanf("%d%d%d%d", px, py, &dx, &dy);

    move(px, py, dx, dy);

    printf("%d %d\n", *px, *py);

    return 0;
}