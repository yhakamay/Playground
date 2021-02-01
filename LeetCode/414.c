#define MAX(v1, v2) ((v1) > (v2)) ? (v1) : (v2)

int     getMax(int *nums, int numsSize)
{
    return numsSize == 1 ? nums[0] : MAX(nums[0], nums[1]);
}

void    shiftLeft(int *nums, int numsSize, int begin)
{
    int i;

    for (i = begin; i < numsSize; i++)
        nums[i - 1] = nums[i];
}

int     thirdMax(int *nums, int numsSize)
{
    int max, secondMax, thirdMax;

    for (int i = 0; i < numsSize - 1; i++)
        for (int j = i + 1; j < numsSize; j++)
            if (nums[i] == nums[j])
            {
                shiftLeft(nums, numsSize, j);
                numsSize--;
            }
    if (numsSize < 3)
        return getMax(nums, numsSize);
    max = INT_MIN;
    secondMax = INT_MIN;
    thirdMax = INT_MIN;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > max)
        {
            thirdMax = secondMax;
            secondMax = max;
            max = nums[i];
        }
        else if (nums[i] > secondMax)
        {
            thirdMax = secondMax;
            secondMax = nums[i];
        }
        else if (nums[i] > thirdMax)
            thirdMax = nums[i];
    }
    thirdMax = (thirdMax == INT_MIN) ? max : thirdMax;
    return thirdMax;
}