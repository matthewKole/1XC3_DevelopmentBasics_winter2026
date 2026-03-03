#include "LetterGrade.h"

LetterGrade toLetterGrade(float score) {
    if (score >= 80.0f) {
        return A;
    } else if (score >= 70.0f) {
        return B;
    } else if (score >= 60.0f) {
        return C;
    } else if (score >= 50.0f) {
        return D;
    } else if (score >= 0.0f) {
        return F;
    } else {
        return Unknown;
    }
}