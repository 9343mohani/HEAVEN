#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = " World!";
    strcat(str1, str2);  // Append str2 to str1
    printf("%s\n", str1);
    return 0;
}