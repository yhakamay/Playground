void    shiftRight(int *target, int begin)
{
    int i, j, count = 0;

    for (i = begin; target[i] != -1; i++)
        count++;
    j = begin + count;
    for (j = begin + count; j > begin; j--)
        target[j] = target[j - 1];
}

int     *createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize)
{
    int *target;
    int i;

    target = (int *)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    for (i = 0; i < numsSize; i++)
        target[i] = -1;    
    for (i = 0; i < numsSize; i++) {
        if (target[index[i]] == -1)
            target[index[i]] = nums[i];
        else {
            shiftRight(target, index[i]);
            target[index[i]] = nums[i];
        }
    }
    return target;
}