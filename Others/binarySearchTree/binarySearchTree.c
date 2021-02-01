#include "binarySearchTree.h"

bool binarySearchTree(int arr[], int toFind)
{
	int leftEndOfArr = 0, rightEndOfArr = ARRAY_SIZE, middleOfArr;
	int i, j, tmp;

	for (i = 0; i < ARRAY_SIZE - 1; i++)
	{
		for (j = i + 1; j < ARRAY_SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	while (leftEndOfArr <= rightEndOfArr)
	{
		middleOfArr = (leftEndOfArr + rightEndOfArr) / 2;
		if (arr[middleOfArr] == toFind)
			return true;
		else if (arr[middleOfArr] < toFind)
			leftEndOfArr = middleOfArr + 1;
		else
			rightEndOfArr = middleOfArr - 1;
	}
	return false;
}
