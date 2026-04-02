#include <stdio.h>

int main() {
    char arr[] = "Hello";   
    char *ptr  = "Hello";   

    arr[0] = 'J';            
    //arr = "World";           

    //ptr[0] = 'J';           
    ptr = "World";           
    printf("%s\n", arr);    
    return 0;
}