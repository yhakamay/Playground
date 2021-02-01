bool*    kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize)
{
    int     max = 0, i;
    bool*    ret = malloc(candiesSize * (sizeof(bool)));

    for (i = 0; i < candiesSize; i++)
        max = candies[i] > max ? candies[i] : max;
    for (i = 0; i < candiesSize; i++)
        ret[i] = candies[i] + extraCandies < max ? false : true;
    *returnSize = candiesSize;
    return ret;
}