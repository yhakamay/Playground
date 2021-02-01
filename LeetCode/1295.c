int findNumbers(int *nums, int numsSize)
{
    int count = 0;

    for (int i = 0; i < numsSize; i++)
    {
        int countTmp = 0;
        for (; nums[i] > 0; nums[i] /= 10)
            countTmp++;
        if (countTmp % 2 == 0)
            count++;
    }
    return count;
}