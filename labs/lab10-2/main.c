#include <stdio.h>

void point_to_max(int **pp, int *a, int *b);

int main()
{
    int random = 987654321;
    int otherNumber = 123456789;

    int *result;

    point_to_max(&result, &random, &otherNumber);
    printf("The maximum value is: %d\n", *result);

    //30, 20, 2, 30

    return 0;
}

void point_to_max(int **pp, int *a, int *b)
{

    if (*a > *b)
    {
        *pp = a;
    }
    else
    {
        *pp = b;
    }
}