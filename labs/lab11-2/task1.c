#include <stdio.h>

int main() {
    int month, day, year;

    printf("Enter date (month/day/year): ");
    scanf("%d/%d/%d", &month, &day, &year);  

    printf("Month %d - Day %d, Year %d\n", month, day, year);

    char *s = "hello, world";

    printf(":%10s:\n",  s);  
    printf(":%.5s:\n",  s);  
    printf(":%-15s:\n", s);  

    return 0;
}