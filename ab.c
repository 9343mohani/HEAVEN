// #include <stdio.h>

// int main() {
//     int arr[] = {4, 2, 7, 2, 5, 7, 8, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Duplicate elements in the array:\n");

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 printf("%d\n", arr[i]);
//                 break;  // avoid printing same duplicate multiple times
//             }
//         }
//     }

//     return 0;
// }
// #include <stdio.h>

// struct Shape {
//     void (*draw)(void);
// };

// void drawCircle() {
//     printf("Drawing a Circle\n");
// }

// int main() {
//     struct Shape circle;
//     circle.draw = drawCircle;
//     circle.draw(); // abstraction in action
//     return 0;
// }
#include<stdio.h>
int main(){
    int a = 10;
    int b = 29;
     int c=a+b;
    printf("%d",c);
    // printf("hii");
    return 0;

}