#include "search_algos.h"

void print_array(int *array, int start, int end);

/**
 * binary_search - searches for value using Binary search algorithm
 * @array: array to search in
 * @size: array's size
 * @value: value
 * Return: value's index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int mid;

	if (!array)
	{
		return (-1);
	}

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (right + left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}

/**
 * print_array - prints array being searched
 * @array: array
 * @start: starting index
 * @end: ending index
 *
 * Return: void
 */
void print_array(int *array, int start, int end)
{
	int i;

	if (!array || start > end)
		return;

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		printf(" %d", array[i]);
		if (i != end)
			printf(",");
		else
			printf("\n");
	}
}
