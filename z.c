#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};  // declare and initialize array

    // Print all elements
    for (int i = 0; i < 5; i++) {
        printf("Element %d = %d\n", i, numbers[i]);
    }

    return 0;
}