#include <stdio.h>
#include <stdbool.h>
bool isPrimeDigit(int digit) {
    return (digit == 2 || digit == 3 || digit == 5 || digit == 7);
}
int nextPrimeDigit(int digit) {
    do {
        digit = (digit + 1) % 10; 
    } while (!isPrimeDigit(digit));
    return digit;
}

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
    printf("Enter an integer N: ");
    scanf("%d", &n);
    int result = incrementToNextPrime(n);
    printf("Resulting number: %d\n", result);

    return 0;
}