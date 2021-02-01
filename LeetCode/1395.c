#include <stdio.h>

int numTeams(int* rating, int ratingSize)
{
    int count = 0;

    for (int i = 0; i < ratingSize - 2; i++)
    {
        for (int j = i + 1; j < ratingSize - 1; j++)
        {
            if (rating[i] > rating[j])
                for (int k = j + 1; k < ratingSize; k++)
                    count += (rating[j] > rating[k]) ? 1 : 0;
            if (rating[i] < rating[j])
                for (int k = j + 1; k < ratingSize; k++)
                    count += (rating[j] < rating[k]) ? 1 : 0;
        }
    }
    return count;
}