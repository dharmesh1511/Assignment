#include <stdio.h>

// Function Declaration
int factorial(int n);

int main() {
    int n;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Function call
    int result = factorial(n);

    // Output
    printf("Factorial of %d is: %d\n", n, result);

    return 0;
}

// Function Definition
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i; // fact = fact * i;
    }
    return fact;
}
