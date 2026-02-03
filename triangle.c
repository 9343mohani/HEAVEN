// #include <stdio.h>

// int main() {
//     int rows, i, j;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         // Print spaces
//         for (j = 1; j <= rows - i; j++) {
//             printf(" ");
//         }
//         // Print stars
//         for (j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int rows = 5, i, j;

    // Upper part (balloon round shape)
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part (string of the balloon)
    for (i = 1; i <= rows; i++) {
        for (j = 1; j < rows; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    return 0;
}
