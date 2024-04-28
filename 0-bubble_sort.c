#include "sort.h"

/**
 * bubble_sort - sorting algorithm which it bubble
 * @array: an array to sort its elements
 * @size: ssize of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swap_flag;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_flag = 1;
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
		if (j == 0)
		{
			if (swap_flag == 0)
			{
				j = size + 2;
			}
		}
	}
}
