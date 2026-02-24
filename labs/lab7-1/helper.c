#include "stdio.h"

int triple(int x)
{
    return 3 * x;
}

void counter()
{
    static int nc = 0;
    int rc = 0;

    nc = nc + 1;
    rc = rc + 1;

    printf("Static variable: %d\nNot Static: %d\n", nc, rc);
}