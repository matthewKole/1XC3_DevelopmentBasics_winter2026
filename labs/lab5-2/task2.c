#include <stdio.h>

int main()
{
    int fah = 451;
    float cel = (fah - 32) * 5.0 / 9.0;

    printf("%d Fahrenheit is %.2f Celsius", fah, cel);
    return 0;
}