#include "sort.h"
/**
 * selection_sort - sorts an array using selection sort
 * @array: array to sort
 * @size: array length
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, c, less, temp, swap;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (less = i, c = i; c < size; c++)
		{
			if (array[c] < array[less])
			{
				less = c;
				swap = 1;
			}
		}
		if (swap == 1)
		{
			temp = array[lesss];
			array[less] = array[i];
			array[i] = temp;
			print_array(array, size)
			swap = 0;
		}
	}
}
