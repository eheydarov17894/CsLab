#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    if (x > 0) {
        y = x * x - 2 * x + 3;
    } else if (x == 0) {
        y = x - 5;
    } else { // x < 0
        y = x * x + 2 * x - 3;
    }

    printf("The value of y for x = %d is: %d\n", x, y);

    return 0;
}
