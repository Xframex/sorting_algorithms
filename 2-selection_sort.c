#include "sort.h"
/**
 * selection_sort - Function to implement the Selection Sort Algorithm
 * @array: Pointer to an arrey of integers
 * @size: Variable of struct type
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, index, elem = 0;

	if (size >= 2)
	{
		for (i = 0; i < size; i++)
		{
			elem = array[i];
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < elem)
				{
					elem = array[j];
					index = j;
				}
			}
			if (elem != array[i])
			{
				tmp = array[i];
				array[i] = elem;
				array[index] = tmp;
				print_array(array, size);
			}

		}
	}
}
