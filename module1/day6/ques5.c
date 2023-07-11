#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollNumber;
    char studentName[20];
    float studentMarks;
};

void readStudentDetails(struct Student* student) {
    printf("Enter the student roll number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter the student name: ");
    scanf("%s", student->studentName);

    printf("Enter the student marks: ");
    scanf("%f", &student->studentMarks);

    getchar(); // Consume newline character
}

void displayStudentDetails(struct Student* student) {
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Name: %s\n", student->studentName);
    printf("Marks: %.2f\n", student->studentMarks);
    printf("\n");
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        readStudentDetails(&students[i]);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        displayStudentDetails(&students[i]);
    }

    free(students);

    return 0;
}
