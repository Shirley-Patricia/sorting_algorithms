#include "sort.h"
#include <stdio.h>

/**

**/
void bubble_sort(int *array, size_t size)
{
	// dos iteradores para recorrer, auxiliar para almacenar el cambio

	size_t i = 0, j = 0;
	int aux = 0;

	printf("%lu\n", size);
	for (; j < size - 1; j++)
	{
		for (; i < (size - j - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
			}
			//print_array(array, size);
		}
	}
}
