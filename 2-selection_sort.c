#include "sort.h"

/**
* selection_sort -  function that sorts an array of integers in ascending order
*@array: array to order
*@size: size of the array
*
* Return: Nothing
**/

void selection_sort(int *array, size_t size)
{
	/* we need two iterators to loop through and aux to stock the change*/

	size_t i = 0, j = 0, min = 0;
	int aux = 0;

	for (; i < size - 1; i++)
	{
		/*we assume that the first element is the min*/
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;
			print_array(array, size);
		}
	}
}
