#include "sort.h"
/**
 * bubble_sort - Sorting algorithm
 * @array: Array of integers
 * @size: Size of the array input
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp;
	int sort = 1;

	if (size >= 2)
	{
		for (; sort == 1;)
		{
			sort = 0;
			for (i = 0; i < size - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					tmp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = tmp;
					print_array(array, size);
					sort = 1;
				}
			}
		}
	}
}
