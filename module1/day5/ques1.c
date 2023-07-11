#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void calculateVolumeAndSurfaceArea(const struct Box* box, float* volume, float* surfaceArea) {
    *volume = box->length * box->width * box->height;
    *surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box myBox;
    float volume, surfaceArea;

    printf("Enter the length of the box: ");
    scanf("%f", &myBox.length);

    printf("Enter the width of the box: ");
    scanf("%f", &myBox.width);

    printf("Enter the height of the box: ");
    scanf("%f", &myBox.height);

    calculateVolumeAndSurfaceArea(&myBox, &volume, &surfaceArea);

    printf("Volume: %.2f\n", volume);
    printf("Total Surface Area: %.2f\n", surfaceArea);

    return 0;
}
