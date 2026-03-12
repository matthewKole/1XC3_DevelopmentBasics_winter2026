#include <stdio.h>

int main(int argc, char const *argv[])
{
    int var = 25;
    int* ptr = &var;

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}
