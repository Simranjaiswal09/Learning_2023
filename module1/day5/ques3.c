#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void readTime(struct Time* t) {
    printf("Enter the time (hours minutes seconds): ");
    scanf("%d %d %d", &(t->hours), &(t->minutes), &(t->seconds));
}

void printTime(struct Time t) {
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time difference;

    int t1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int t2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    int diffSeconds = t1Seconds - t2Seconds;
    if (diffSeconds < 0) {
        diffSeconds = -diffSeconds;
    }

    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}

int main() {
    struct Time t1, t2, difference;

    printf("Enter the first time:\n");
    readTime(&t1);

    printf("Enter the second time:\n");
    readTime(&t2);

    difference = calculateTimeDifference(t1, t2);

    printf("\nDifference between the two times:\n");
    printTime(difference);

    return 0;
}
