#include "sort.h"
/**
 * bubble_sort -> sorting an array of ints using bubble sort alogrthim
 * @array: the given array containing the ints
 * @size: the size of  the array
*/
void bubble_sort(int *array, size_t size)
{
	int i, tmp, y;

	for (i = 0; i < (int) size; i++)
	{

		for (y = 0; y < (int) size - 1; y++)
		{
			if (array[y] > array[y  + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
