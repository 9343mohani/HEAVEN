#include <stdio.h>
#include <string.h>

// Function to find the longest common prefix
char* longestCommonPrefix(char strs[][100], int n) {
    static char prefix[100];  // buffer to store result
    if (n == 0) return "";

    strcpy(prefix, strs[0]);  // start with the first string

    for (int i = 1; i < n; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';  // truncate prefix
    }
    return prefix;
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char strs[n][100];
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strs[i]);
    }

    char* result = longestCommonPrefix(strs, n);
    if (strlen(result) == 0)
        printf("No common prefix found.\n");
    else
        printf("Longest Common Prefix: %s\n", result);

    return 0;
}
