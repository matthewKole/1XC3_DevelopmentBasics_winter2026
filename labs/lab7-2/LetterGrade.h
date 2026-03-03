#ifndef LETTERGRADE_H
#define LETTERGRADE_H

typedef enum {
    A = 10,
    B = 9,
    C = 8,
    D = 7,
    F = 0,
    Unknown = -1
} LetterGrade;

LetterGrade toLetterGrade(float score);

#endif