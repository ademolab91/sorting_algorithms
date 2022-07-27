#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 *
 * @array: pointer to array
 * @size: size of array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, s = size - 2;
	int temp, swapped;

	if (array != NULL && size > 1)
	{
		for (i = 0, swapped = 1; (i <= s) && swapped; i++)
		{
			swapped = 0;
			for (j = 0; j <= s; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
					swapped = 1;
				}
			}
		}
	}
}
