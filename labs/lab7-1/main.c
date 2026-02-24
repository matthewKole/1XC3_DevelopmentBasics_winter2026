#include "helper.c"
#include "stdio.h"

int main(int argc, char const *argv[])
{
    int result = triple(5);
    printf("Tripiling 5 is: %d\n\n", result);

    counter();
    counter();
    counter();
    counter();

    //15
    //10
    return 0;
}
