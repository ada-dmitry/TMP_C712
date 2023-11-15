#include <stdio.h>

// int main(int argv, char argc[])
// {
//     //printf("Hello, world!\n");
//     printf("Good bye\n");

//     return 2;

// }

int main()
{
    int r, t;

    scanf("%d%d", &r, &t);

    printf("%d %d\n", t/r, t-(r*(t/r)));

    return 0;

}