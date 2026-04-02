#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("notes.txt", "r");
    if (fp == NULL) {
        printf("didnt open");
        return 1;
    }

    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL)
        fputs(line, stdout);  

    fclose(fp);
    return 0;
}