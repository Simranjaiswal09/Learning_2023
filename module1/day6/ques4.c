#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int studentID;
    char studentName[20];
    float studentMarks;
};

void getStudentDetails(struct Student* student) {
    printf("Enter the student ID: ");
    scanf("%d", &student->studentID);

    printf("Enter the student name: ");
    scanf("%s", student->studentName);

    printf("Enter the student marks: ");
    scanf("%f", &student->studentMarks);

    getchar(); // Consume newline character
}

void displayStudentDetails(struct Student* student) {
    printf("Student ID: %d\n", student->studentID);
    printf("Student Name: %s\n", student->studentName);
    printf("Student Marks: %.2f\n", student->studentMarks);
    printf("\n");
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        getStudentDetails(&students[i]);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        displayStudentDetails(&students[i]);
    }

    free(students);

    return 0;
}
