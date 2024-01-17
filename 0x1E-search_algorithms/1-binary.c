#include "search_algos.h"

/**
 * binary_search - Searches value in array of ints using the Binary search algo
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search
 * Return: First index where value is located 
 *         otherwise -1 for NULL array
 */

int binary_search(int *array, size_t size, int value)
{
	if (array && size)
		return (recursive_binary_search(array, 0, (int)size - 1, value));

	return (-1);
}


/**
 * recursive_binary_search - Recursively searches array in subarrays
 * @array: Array to search
 * @left: Search on left side of array
 * @right: Search on right side of array
 * @value: Value to search for
 * Return: First index where value is located 
 *         otherwise -1 for NULL array
 */

int recursive_binary_search(int *array, int left, int right, int value)
{

	int mid;

	if (right >= left)
	{
		mid = left + (right - left) / 2;
		print_search(array, left, right);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			return (recursive_binary_search(array, left, mid - 1, value));

		return (recursive_binary_search(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 * print_search - Prints array
 * @array: Array to search
 * @first: left hand side of array
 * @last: right hand side of array
 * Return: nothing
 */

void print_search(int *array, int first, int last)
{
	int index = 0;

	printf("Searching in array: ");

	while (first <= last)
	{
		if (index > 0)
			printf(", ");
		
		index = first++;
		printf("%d", array[index++]);
	}
	printf("\n");
}
