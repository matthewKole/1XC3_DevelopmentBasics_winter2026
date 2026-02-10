#include <stdio.h>
#include <limits.h>

#define studentNumber 400580279

int main()
{
    const int year = 2026;

    printf("--- Task 3 Check-off ---\n");
    printf("Student ID: %d\n", studentNumber);
    printf("Current Year: %d\n\n", year);

    printf("Sizes in bytes:\n");
    printf("int is %lu bytes\n", sizeof(int));
    printf("char is %lu bytes\n", sizeof(char));
    printf("float is %lu bytes\n", sizeof(float));
    printf("double is%lu bytes\n\n", sizeof(double));

    
    printf("Type Ranges:\n");
    printf("int range: [%d, %d]\n", INT_MIN, INT_MAX);
    printf("char range: [%d, %d]\n", CHAR_MIN, CHAR_MAX);
    printf("short range: [%d, %d]\n\n", SHRT_MIN, SHRT_MAX);


    printf("Comparison:\n");
    printf("Student ID: %d\n", studentNumber);
    printf("Max value of short: %d\n", SHRT_MAX);

    if (studentNumber <= SHRT_MAX)
    {
        printf("Result: Yes, the ID fits in a short.\n");
    }
    else
    {
        printf("Result: No, the ID is too large for a short\n");
    }

    return 0;
}