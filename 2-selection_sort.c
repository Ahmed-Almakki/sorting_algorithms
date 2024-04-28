#include "sort.h"

/**
 * selection_sort - sorting using selection algorithm
 * @array: the array to sort it element
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	int temp, k, swap_flag = 0;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		k = i;
		temp = array[i];
		swap_flag = 0;
		for (j = i + 1; j < size; j++)
		{
			if (temp > array[j])
			{
				temp = array[j];
				k = j;
				swap_flag = 1;
			}
		}
		if (swap_flag)
		{
			array[k] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
