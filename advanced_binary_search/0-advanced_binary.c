#include <stdio.h>
#include "search_algos.h"

void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

int recursiveSearch(int *array,int low, int high,int value){	
	int mid;

	if (low > high)
		return (-1);

	printArray(array, low,high);

	mid = low + (high - low) / 2;

	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);

	if (array[mid] >= value)
		return (recursiveSearch(array, low, mid, value));
	return (recursiveSearch(array, mid + 1, high, value));
}
int advanced_binary(int *array, size_t size, int value){

	if (array == NULL){
		return -1;
	}

	return recursiveSearch(array,0, size -1,value);
}
