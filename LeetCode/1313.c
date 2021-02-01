/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
    int *retArr;
    int i, j;

    *returnSize = 0;
    for (i = 0; i < numsSize; i += 2)
        *returnSize += nums[i];
    retArr = malloc(sizeof(int) * (*returnSize));
    for (i = 0, j = 0; i < numsSize; i += 2)
            while (nums[i]--)
                retArr[j++] = nums[i + 1];
    return retArr;
}