#include "sort.h"
/**
 * sorted -> check if the given array is already sorted
 * @array: the given array
 * @size: the size of the array
 * Return: 0 if the given is sorted, else 1
*/
int sorted(int *array, size_t size)
{
	int i = 0;

	while (i < (int) size)
	{
		if (array[i] > array[i + 1])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/**
 * bubble_sort -> sorting an array of ints using bubble sort alogrthim
 * @array: the given array containing the ints
 * @size: the size of  the array
*/
void bubble_sort(int *array, size_t size)
{
	int i = 0, tmp;

	while (i < (int)size)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			print_array(array, size);
		}
		i++;
	}
	if (sorted(array, size) == 1)
	{
		bubble_sort(array, size);
	}
}
