#include <stdio.h>

struct Student {
    char  name[50];
    int   age;
    float gpa;
};


int findTopStudent(struct Student students[], int size) {
    int topIdx = 0;                          
    for (int i = 1; i < size; i++) {
        if (students[i].gpa > students[topIdx].gpa)
            topIdx = i;
    }
    return topIdx;
}

int main() {
    struct Student students[3] = {
        {"Alice",   20, 3.8f},
        {"Bob",     22, 3.5f},
        {"Charlie", 19, 3.9f}
    };

    int top = findTopStudent(students, 3);

    printf("Top Student: %s (%.1f)\n",
           students[top].name, students[top].gpa);

    return 0;
}