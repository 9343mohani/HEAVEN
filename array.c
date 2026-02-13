#include <stdio.h>

int main() {
    // Declare an array of 5 integers
    int numbers[5];

    // Initialize with values
    int primes[5] = {2, 3, 5, 7, 11};

    // Partial initialization (rest become 0)
    int data[5] = {1, 2};

    // Accessing elements
    printf("First prime: %d\n", primes[0]);   // Index starts at 0
    printf("Last prime: %d\n", primes[4]);

    // Modifying elements
    primes[2] = 13;
    printf("Updated third prime: %d\n", primes[2]);

    return 0;
}
