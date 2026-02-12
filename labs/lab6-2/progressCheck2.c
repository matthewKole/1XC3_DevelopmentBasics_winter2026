#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int ctr = 0; ctr < 11; ctr++)
    {
        if (ctr == 5)
        {
            continue;
        }
        else
        {
            printf("%d\n", ctr);
        }
    }

    printf("\n");

    int ctrW = 0;
    while (ctrW < 11)
    {
        if (ctrW == 5)
        {
            ctrW++;
            continue;
        }
        else
        {
            printf("%d\n", ctrW);
            ctrW++;
        }
    }
    return 0;
}
