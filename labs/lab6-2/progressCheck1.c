#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 42;

    if (x < 10){
        printf("SMALL");
    }
    else if (10 <= x < 100){
        printf("MEDIUM");
    }
    else{
        printf("LARGE");
    }
    
    return 0;
}
