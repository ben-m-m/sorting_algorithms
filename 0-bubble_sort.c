#include "sort.h"

/**
 * bubble_sort - sorts a list in bubble format
 * @array: integers array to sort
 * @size: size of array
 *
 * Description: print array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = 0, t = size;
	int temp;

	if (array == NULL)
		return;
	for (t = size; t > 0; t--)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				temp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
