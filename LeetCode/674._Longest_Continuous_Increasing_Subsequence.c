#include <stdio.h>

int findLengthOfLCIS(int* nums, int numsSize){
    int tmpCount = 1;
    int ans = 1;
    
    if (numsSize == 0)
        return 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i - 1] < nums[i]) {
            tmpCount++;
            if (ans < tmpCount)
                ans = tmpCount;
        } else {
            tmpCount = 1;
        }
    }
    return ans;
}