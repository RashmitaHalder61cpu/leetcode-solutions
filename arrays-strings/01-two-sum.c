#include <stdio.h>

void twoSum(int nums[], int n, int target, int result[]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int result[2];

    twoSum(nums, 4, 9, result);

printf("Test Case 1: [%d, %d]\n", result[0], result[1]);

int nums2[] = {3, 3};
int result2[2];

twoSum(nums2, 2, 6, result2);

printf("Test Case 2: [%d, %d]\n", result2[0], result2[1]);

return 0;
}
