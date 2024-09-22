#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the lengths of the three sticks:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the lengths can form a triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Yes, these sticks can form a triangle.\n");
    } else {
        printf("No, these sticks cannot form a triangle.\n");
    }

    return 0;
}
