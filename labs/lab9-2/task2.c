#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5};

    int* ptr = &arr[0];  
    for (int i = 0; i < 5; i++)
    {
        printf("Value of arr[%d]: %d\n", i, *(ptr + i));
    }
    return 0;
}
