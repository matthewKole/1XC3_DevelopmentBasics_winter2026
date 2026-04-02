#include <stdio.h>

struct Student {
    char  name[50];
    int   age;
    float gpa;
};

int main() {
    struct Student s1 = {"Alice", 20, 3.8f}; 

    printf("Student: %s, Age: %d, GPA: %.1f\n",
           s1.name, s1.age, s1.gpa);

    return 0;
}