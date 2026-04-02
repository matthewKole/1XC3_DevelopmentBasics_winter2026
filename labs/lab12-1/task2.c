#include <stdio.h>

struct Student {
    char  name[50];
    int   age;
    float gpa;
};

int main() {
    struct Student students[3] = {
        {"Alice",   20, 3.8f},
        {"Bob",     22, 3.5f},
        {"Charlie", 19, 3.9f}
    };

    for (int i = 0; i < 3; i++) {
        printf("Student: %s, Age: %d, GPA: %.1f\n",
               students[i].name,
               students[i].age,
               students[i].gpa);
    }
    return 0;
}