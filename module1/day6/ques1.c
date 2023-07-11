#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int numStudents) {
    char tempInput[100];
    strcpy(tempInput, input);
    char* token = strtok(tempInput, " ");

    for (int i = 0; i < numStudents; i++) {
        students[i].rollNumber = atoi(token);

        token = strtok(NULL, " ");
        strcpy(students[i].name, token);

        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        token = strtok(NULL, " ");
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    char inputString[100];
    printf("Enter the input string: ");
    scanf(" %[^\n]", inputString);

    parseString(inputString, students, numStudents);

    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    free(students);

    return 0;
}
