#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

void swapPersons(struct Person* per1, struct Person* per2) {
    struct Person tempPerson;
    tempPerson = *per1;
    *per1 = *per2;
    *per2 = tempPerson;
}

int main() {
    struct Person per1, per2;

    printf("Enter details for Person 1:\n");
    printf("Name: ");
    scanf("%s", per1.name);
    printf("Age: ");
    scanf("%d", &per1.age);

    printf("Enter details for Person 2:\n");
    printf("Name: ");
    scanf("%s", per2.name);
    printf("Age: ");
    scanf("%d", &per2.age);

    printf("\nBefore swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", per1.name, per1.age);
    printf("Person 2: Name = %s, Age = %d\n", per2.name, per2.age);

    swapPersons(&per1, &per2);

    printf("\nAfter swapping:\n");
    printf("Person 1: Name = %s, Age = %d\n", per1.name, per1.age);
    printf("Person 2: Name = %s, Age = %d\n", per2.name, per2.age);

    return 0;
}
