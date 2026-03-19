#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *malloc_arr = (int *)malloc(5 * sizeof(int));

    malloc_arr[0] = 10;
    malloc_arr[1] = 20;
    malloc_arr[2] = 30;
    malloc_arr[3] = 40;
    malloc_arr[4] = 50;

    printf("Values in malloc array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("malloc_arr[%d]: %d\n", i, malloc_arr[i]);
    }

    free(malloc_arr);

    int *calloc_arr = (int *)calloc(4, sizeof(int));
    printf("Values in calloc array:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("calloc_arr[%d]: %d\n", i, calloc_arr[i]);
    }

    calloc_arr[0] = 5;
    calloc_arr[1] = 15;
    calloc_arr[2] = 25;
    calloc_arr[3] = 35;

    printf("Values in calloc array:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("calloc_arr[%d]: %d\n", i, calloc_arr[i]);
    }

    free(calloc_arr);

    /*Consider the following code:
int* p1 = (int*) malloc(3 * sizeof(int));
int* p2 = (int*) calloc(3, sizeof(int));
printf("%d %d %d\n", p1[0], p1[1], p1[2]);
printf("%d %d %d\n", p2[0], p2[1], p2[2]);
Explain:
1. Why might p1 and p2 print different values?
2. What happens if free is never called on either pointer?
8

1. p1 and p2 might print different values because malloc does not initialize the allocated memory, so it may contain garbage values, while calloc initializes the allocated memory to zero, so it will print 0 for all elements.
2. If free is never called on either pointer, it results in a memory leak, where the allocated memory is not returned to the system and cannot be reused.
*/

    return 0;
}
