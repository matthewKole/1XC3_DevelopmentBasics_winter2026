#include <stdio.h>
#include "LetterGrade.h"
#include "LetterGrade.h" 

int main() {
    float myScore = 95.0f;
    LetterGrade result = toLetterGrade(myScore);

    printf("Score: %.1f\n", myScore);
    printf("Letter Grade Enum Value: %d\n", result);

    if (result == A) {
        printf("Result: A\n");
    }

    return 0;
}