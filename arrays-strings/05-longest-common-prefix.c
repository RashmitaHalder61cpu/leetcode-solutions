#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char strs[][100], int strsSize) {
    static char prefix[100];

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j]) {
            j++;
        }

        prefix[j] = '\0';
    }

    return prefix;
}

int main() {
    char strs[3][100] = {"flower", "flow", "flight"};

    int strsSize = 3;

    char* result = longestCommonPrefix(strs, strsSize);

    printf("Longest Common Prefix = %s\n", result);

    return 0;
}