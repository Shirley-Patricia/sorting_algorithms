#include "sort.h"

/**
* bubble_sort -  function that sorts an array of integers in ascending order
*@array: array to order
*@size: size of the array
*
* Return: Nothing
**/

void bubble_sort(int *array, size_t size)
{
	/* we need two iterators to loop through and aux to stock the change*/

	size_t i = 0, j = 0;
	int aux = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
