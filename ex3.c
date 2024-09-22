#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 6 == 0) {
        printf("Excellent\n");
    } 
    else if (num % 2 == 0 || num % 3 == 0) {
        printf("OK\n");
    } 
    else {
        printf("Noo\n");
    }

    return 0;
}
