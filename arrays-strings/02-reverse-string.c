#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str1[] = "hello";
    reverseString(str1);
    printf("Test Case 1: %s\n", str1);

    char str2[] = "abc";
    reverseString(str2);
    printf("Test Case 2: %s\n", str2);

    return 0;
}