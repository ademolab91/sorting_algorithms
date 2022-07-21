#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: array of integers
 * @size: size of array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, i_min;
	int *temp, t;

	if (array && size)
	{
		for (i = 0; i <= (size - 2); i++)
		{
			i_min = i;
			for (j = (i + 1); j <= (size - 1); j++)
			{
				if (array[j] < array[i_min])
					i_min = j;
			}
			temp = (int *)&array[i];
			t = *temp;
			array[i] = array[i_min];
			array[i_min] = t;
			print_array(array, size);
		}
	}
}
