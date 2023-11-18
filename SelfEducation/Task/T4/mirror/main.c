#include <stdio.h>

void mirror(int *px, int *py);
void mirror_seg(int *px1, int *py1, int *px2, int *py2);

int main()
{
    int x1, y1, x2, y2;
    int *px1 = &x1, *py1 = &y1;
    int *px2 = &x2, *py2 = &y2;

    scanf("%d%d", px1, py1);
    scanf("%d%d", px2, py2);

    // mirror(px1, py1);

    // printf("%d %d\n", x1, y1);

    mirror_seg(px1, py1, px2, py2);

    printf("%d %d %d %d\n", x1, y1, x2, y2);

    return 0;
}