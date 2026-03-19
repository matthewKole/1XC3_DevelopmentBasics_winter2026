#include <stdio.h>

int sum(int *arr, int len);

int main()
{
    int array[5] = {4, 8, 15, 16, 23};
    int total = sum(array, 5);
    printf("The sum is: %d\n", total);
}

int sum(int *arr, int len)
{
    int total = 0;

    int *ptr = arr;
    for (int i = 0; i < len; i++)
    {
        total += *ptr;
        ptr++;
    }
    return total;
}