#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 *          using the selection sort algorithm
 * @array: the given array of integers
 * @size: the size of the array
*/
void selection_sort(int *array, size_t size)
{
	int i, y, min, min_index, tmp;

	if (array == NULL)
		return;
	min = array[0];
	for (y = 0; y < (int)size - 1; y++)
	{

		min = array[y];
		for (i = y; i < (int)size; i++)
		{
			if (array[i] < min)
			{
				min = array[i];
				min_index = i;
			}
		}
		if (array[y] == min)
			continue;
		tmp = array[y];
		array[y] = min;
		array[min_index] = tmp;
		print_array(array, size);
	}
}
