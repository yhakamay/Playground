int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *ret;

    ret = (int *)malloc(2 * sizeof(int));
    *returnSize = 2;
    for (int i = 0; i < numsSize - 1; i++)
    {
        if (nums[i] > target)
            continue ;
        for (int j = numsSize - 1; j > i; j--)
        {
            if (nums[i] + nums[j] == target)
            {
                ret[0] = i;
                ret[1] = j;
                break ;
            }
        }
    }
    return ret;
}