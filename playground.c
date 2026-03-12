#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*malloc vs calloc
Allocate two arrays:
malloc(...)
calloc(...)
Print their values before assigning anything.
Observe the difference.
14
*/

    int* malloc_arr = (int*)malloc(5 * sizeof(int));
    int* calloc_arr = (int*)calloc(5, sizeof(int));

    printf("Values in malloc array:\n");
    for (int i = 0; i < 5; i++) {
        printf("malloc_arr[%d]: %d\n", i, *(malloc_arr + i));
    }

    printf("Values in calloc array:\n");
    for (int i = 0; i < 5; i++) {
        printf("calloc_arr[%d]: %d\n", i, *(calloc_arr + i));
    }

    free(malloc_arr);
    free(calloc_arr);


    return 0;
}
