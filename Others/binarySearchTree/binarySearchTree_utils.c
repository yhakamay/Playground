#include "binarySearchTree.h"

//void sortArr(int *arr[])
//{
//	int i, j, tmp;

//	for (i = 0; i < ARRAY_SIZE - 1; i++)
//	{
//		for (j = i + 1; j < ARRAY_SIZE; j++)
//		{
//			tmp = &arr[i];
//			&arr[i] = &arr[j];
//			&arr[j] = tmp;
//		}
//	}
//}
void showArr(int arr[])
{
	printf("The array after sorted: {");
	for (int i = 0; i < ARRAY_SIZE; i++)
		printf(i == ARRAY_SIZE ? "%d " : "%d", arr[i]);
	printf("}\n");
}

void showResult(bool res)
{
	if (res == true)
		puts("\nFound!");
	else
		puts("\nNot found...");
}
