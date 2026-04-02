#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *a = "abc";  
    char b[] = "abc"; 

    if (a == b) 
        printf("same address\n");
    else
        printf("different address\n"); 

    if (strcmp(a, b) == 0)        
        printf("same content\n"); 
    else
        printf("different content\n");
    return 0;
}
