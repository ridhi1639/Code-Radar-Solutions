#include <stdio.h>
#include <stdbool.h>

// Function to check if a digit is prime
bool isPrimeDigit(int digit) {
    return (digit == 2 || digit == 3 || digit == 5 || digit == 7);
}

// Function to get the next prime digit
int nextPrimeDigit(int digit) {
    do {
        digit = (digit + 1) % 10; // Increment and wrap around
    } while (!isPrimeDigit(digit)); // Continue until prime digit is found
    return digit;
}

// Function to process the number
int incrementToNextPrime(int n) {
    int result = 0, place = 1;

    while (n > 0) {
        int digit = n % 10;
        result += nextPrimeDigit(digit) * place;
        place *= 10;
        n /= 10;
    }

    return result;
}

int main() {
    int n;

    // Input the number
    printf("Enter an integer N: ");
    scanf("%d", &n);

    // Process the number
    int result = incrementToNextPrime(n);

    // Output the result
    printf("Resulting number: %d\n", result);

    return 0;
}