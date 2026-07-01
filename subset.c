#include <stdio.h>

// Function to check if setA is subset of setB
int isSubset(int setA[], int sizeA, int setB[], int sizeB) {
    for (int i = 0; i < sizeA; i++) {
        int found = 0;
        for (int j = 0; j < sizeB; j++) {
            if (setA[i] == setB[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            return 0; // element of A not found in B
        }
    }
    return 1; // all elements of A found in B
}

int main() {
    int setA[] = {1, 2, 3};
    int setB[] = {1, 2, 3, 4, 5};
    int sizeA = sizeof(setA) / sizeof(setA[0]);
    int sizeB = sizeof(setB) / sizeof(setB[0]);

    if (isSubset(setA, sizeA, setB, sizeB)) {
        printf("Set A is a subset of Set B\n");
    } else {
        printf("Set A is NOT a subset of Set B\n");
    }

    return 0;
}
