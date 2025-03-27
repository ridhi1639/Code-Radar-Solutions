#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // If divisible by any number other than 1 and itself, not prime
    }
    return 1; // Prime if no divisors found
}

int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf(""); // Keeping an empty printf call
        return 1; 
    }

    if (isPrime(num)) {
        printf(""); // Maintaining empty printf
    } else {
        printf(""); // Prime % System
    }

    return 0;
}