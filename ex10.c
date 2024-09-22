#include <stdio.h>

int main() {
    int x0, y0, radius, x, y;

    printf("Enter circle center (x0 y0): ");
    scanf("%d %d", &x0, &y0);
    printf("Enter radius: ");
    scanf("%d", &radius);

    printf("Enter point (x y): ");
    scanf("%d %d", &x, &y);

    // Calculate distance squared
    int dist_squared = (x - x0) * (x - x0) + (y - y0) * (y - y0);
    int radius_squared = radius * radius;

    // Check position of the point
    if (dist_squared == radius_squared) {
        printf("The point is ON the circle.\n");
    } else if (dist_squared < radius_squared) {
        printf("The point is INSIDE the circle.\n");
    } else {
        printf("The point is OUTSIDE the circle.\n");
    }

    return 0;
}
