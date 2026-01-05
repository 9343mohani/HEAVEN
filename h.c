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
#include<string.h>
int main(){
     int i,j,k,n=4;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=n-i;j++)
             printf(" ");
             for(int k=1;k<=i;k++)
            printf("*");
             printf("\n");
         }
    
    }



    
     
    
    

    

    
       




