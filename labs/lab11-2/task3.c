#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *format[] = {":%s:", ":%10s:", ":%.5s:", ":%-10s:"};
    char *s = "Hi";
    for (int i = 0; i < 4; i++)
        printf(format[i], s);
    return 0;
}

/*1. What does the number before s in %10s control?
2. What does the - in %-10s do?
3. What does the .5 in %.5s do when the string is shorter than 5?*/

/*10 is a minimum column width
- means left align so the padding goes on the right instead
print normally with no extra padding*/