// #include <stdio.h>

//       int main() {  
//         int n, i;
//         printf("Enter the value of n: ");
//         scanf("%d", &n);

//            i = n;
//      while (i >= 1) {
//         printf("%d\n", i);
//         i--;
//          }
//             return 0;
//         }
 #include <stdio.h>

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the minimum of two numbers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Function to calculate trapped water
int trapWater(int height[], int n) {
    if (n <= 2) return 0; // Not enough bars to trap water

    int leftMax[n], rightMax[n];
    int water = 0;

    // Fill leftMax array
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    // Fill rightMax array
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    // Calculate trapped water
    for (int i = 0; i < n; i++) {
        water += min(leftMax[i], rightMax[i]) - height[i];
    }

    return water;
}

int main() {
    int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(height) / sizeof(height[0]);

    printf("Trapped water: %d\n", trapWater(height, n));
    return 0;
}
