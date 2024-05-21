#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: The array of integers
 * @size: The size of the array
 * @value: The value to search for
 * Return: return index or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	int swp;
	int start = 0;
	int end =  sqrt((int)size);

	if (!array)
		return (-1);

	while (end <= (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);

		if (value >= start && value <= end)
		{
			printf("Value found between indexes [%d] and [%d] \n", start, end);
			while (array[start] <= array[end])
			{
				printf("Value checked array[%d] = [%d]\n", start, array[start]);
				if (value == array[start])
				{
					return (start);
				}
				start++;
			}
		}
		else
		{
			swp = end;
			start = swp;
			end = end + sqrt(size);
		}
	}
	return (-1);
}
