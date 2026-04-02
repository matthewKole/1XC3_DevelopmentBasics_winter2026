#include <stdio.h>
int main()
{
    struct Book b = {"C Guide", 300};
    return 0;
}
struct Book
{
    char title[50];
    int pages;
};

//Why this may fail to compile
//What must be changed to fix it

