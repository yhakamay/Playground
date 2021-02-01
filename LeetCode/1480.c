int* runningSum(int* nums, int numsSize, int* returnSize) {
    int*    ret;
    int     i;

    ret = (int *)malloc(numsSize * (sizeof(int)));
    ret[0] = nums[0];
    for (i = 1; i < numsSize; i++)
        ret[i] = ret[i - 1] + nums[i];
    *returnSize = numsSize;
    return ret;
}