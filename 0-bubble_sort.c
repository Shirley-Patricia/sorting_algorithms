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

	for (; j < size - 1; j++)
	{
		for (i = 0; i < (size - j - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
