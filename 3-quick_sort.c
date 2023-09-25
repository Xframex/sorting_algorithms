#include "sort.h"
/**
* split - Splits the array,the pivot in the right place
* @array: Array of unsorted integers
* @size: size of the array to sort
* @low: initial index of the array
* @high: Last index of the array
* Return: index of the pivot
*/
int split(int *array, size_t size, int low, int high)
{
	int elem = low - 1;
	int count = low;
	int pivot = array[high], tmp;

	for (; count < high; count++)
	{
		if (array[count] <= pivot)
		{
			elem++;
			tmp = array[elem];
			array[elem] = array[count];
			array[count] = tmp;
			if (elem != count && array[count] != array[elem])
				print_array(array, size);

		}
	}
	elem++;
	tmp = array[elem];
	array[elem] = array[high];
	array[high] = tmp;
	if (elem != count)
		print_array(array, size);
	return (elem);
}
/**
* recursive_sort - Sort recursively an print
* @array: Array of unsorted integers
* @size: size of the array to sort
* @low: initial index of the array
* @high: Last index of the array
*/
void recursive_sort(int *array, size_t size, int low, int high)
{
	int piv_idx;

	if (low < high)
	{
		piv_idx = split(array, size, low, high);
		recursive_sort(array, size, low, piv_idx - 1); /**quick_s array izquierda */
		recursive_sort(array, size, piv_idx + 1, high);  /**quick_s array derecha*/
	}
}
/**
* quick_sort - Sorts an array of integers
* @array: Array of unsorted integers
* @size: size of the array to sort
*/
void quick_sort(int *array, size_t size)
{
	int low = 0, high = size - 1;

	if (array != NULL && size >= 2) /**Caso de recursion */
	{
		recursive_sort(array, size, low, high);  /**quick_s array derecha*/
	}
}
