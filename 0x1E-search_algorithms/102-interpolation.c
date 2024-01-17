#include "search_algos.h"

/**
 * interpolation_search - Search value in array with Interpolation search algo
 * @array: Array to search
 * @size: Size of the array
 * @val: Value to search
 * Return: First index where value is located
 *         otherwise -1 for NULL array
 */

int interpolation_search(int *array, size_t size, int val)
{
	int low = 0;
	int high = (size - 1);
	int pos;


	while (array != NULL)
	{

		pos = low + (((double)(high - low) /
		      (array[high] - array[low])) * (val - array[low]));

		if (pos < (int)size)
		{
			printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}

		if (array[pos] == val)
			return (pos);

		if (array[position] < val)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	return (-1);
}
