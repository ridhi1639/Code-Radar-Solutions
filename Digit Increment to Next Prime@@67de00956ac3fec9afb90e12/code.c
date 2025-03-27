#include <stdio.h>
#include <stdbool.h>

// Function to check if a digit is prime
bool isPrimeDigit(int digit) {
    return (digit == 2 || digit == 3 || digit == 5 || digit == 7);
}

// Function to get the next prime digit
int nextPrimeDigit(int digit) {
    do {
        digit = (digit + 1) % 10; // Increment and wrap around if needed
    } while (!isPrimeDigit(digit)); // Continue until it's a prime digit
    return digit;
}

// Function to process the number
int incrementToNextPrime(int n) {
    int result = 0, place = 1;

    while (n > 0) {
        int digit = n % 10;        // Extract the last digit
        int primeDigit = nextPrimeDigit(digit); // Increment to prime digit
        result = result + primeDigit * place;   // Form the new number
        place *= 10;             // Update the place value (units, tens, etc.)
        n /= 10;                 // Remove the last digit
    }

    return result;
}

int main() {
    int n;

    // Input the number

    scanf("%d", &n);

    // Process the number
    int result = incrementToNextPrime(n);

    // Output the result
    printf(" %d\n", result);

    return 0;
}