#include <stdio.h>

int main() {
    int radius;
    int width, length, height;

    printf("Enter the radius of the basketball: ");
    scanf("%d", &radius);

    printf("Enter the width of the box: ");
    scanf("%d", &width);
    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the height of the box: ");
    scanf("%d", &height);

    int diameter = 2 * radius;

    // Check if the basketball can fit in the box
    if (diameter <= width && diameter <= length) {
        printf("The basketball can fit in the box.\n");
    } else {
        printf("The basketball cannot fit in the box.\n");
    }

    return 0;
}
