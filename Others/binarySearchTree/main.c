#include "binarySearchTree.h"

int main(void)
{
	int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};
	int toFind;

	//sortArr(&arr);
	showArr(arr);
	printf("Enter the value to find: ");
	scanf("%d", &toFind);
	showResult(binarySearchTree(arr, toFind));
	return 0;
}
