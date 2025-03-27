#include<stdio.h>

int isprime(int n) {
    if (n < 2) return 0; // Numbers less than 2 are not prime
    for (int j = 2; j * j <= n; j++) {
        if (n % j == 0) return 0; // If divisible, not prime
    }
    return 1; // Prime if no divisors found
}

int main() {
    int n;
    printf("Enter the number of integers to check: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (isprime(num)) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }
    return 0;
}