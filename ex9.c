#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    
    int digit1 = (num / 100) % 10; 
    int digit2 = (num / 10) % 10; 
    int digit3 = num % 10;         

    // Calculate maximum product
    int maxProduct = digit1; // Start with first digit

    if (digit1 * digit2 > maxProduct) maxProduct = digit1 * digit2;
    if (digit1 * digit3 > maxProduct) maxProduct = digit1 * digit3;
    if (digit2 * digit3 > maxProduct) maxProduct = digit2 * digit3;
    if (digit1 * digit2 * digit3 > maxProduct) maxProduct = digit1 * digit2 * digit3;

    // Output the maximum product
    printf("Max product: %d\n", maxProduct);
    
    return 0;
}
