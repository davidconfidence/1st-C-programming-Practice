#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct Student
{
    char name [40];
    char id [10];
    int age;
    int grades [5];
};

int main()
{
    struct Student John;

    strcpy(John.name, "JOHN ANDREW");
    strcpy(John.id, "00123465797");
    John.age = 54;
    John.grades [0] = 5;
    John.grades [1] = 4;
    John.grades [2] = 3;
    John.grades [3] = 2;
    John.grades [4] = 1;

    printf("Name: %s\n", John.name);
    printf("ID: %s\n", John.id);
    printf("Age: %d\n", John.age);
    printf("Grades: ");
    for (int i = 0; i < 5; i++)
    printf("%d", John.grades[i]);
    printf("\n");

    return 0;
}
