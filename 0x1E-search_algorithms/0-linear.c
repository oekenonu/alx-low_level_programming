#include "search_algos.h"


/**
 * linear_search - Search an array linearly
 * @array: Array to be searched
 * @size: Size of array
 * @value: Value to search for
 * Return: first index where value is located otherwise
 *         -1 if value is not present or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	for (index = 0; array && index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);													}
	}
	return (-1);
}
