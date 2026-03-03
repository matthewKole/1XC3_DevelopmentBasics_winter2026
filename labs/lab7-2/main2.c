#include <stdio.h>

#define MAX(A, B) ((A) > (B) ? (A) : (B))
#define SQ(x) x*x

int main() {
    int i = 0, j = 1;

    printf("%d\n", MAX(i, j)); 

    int maxinc = MAX(++i, ++j);
    printf("%d\n", maxinc); 

    printf("%d\n", SQ(3)); 

    printf("%d\n", SQ(2+1)); 

    return 0;
}