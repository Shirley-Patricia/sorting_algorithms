#include "sort.h"

/**
* insertion_sort_list -  function that sorts an list of integers in ascending order
*
*@list: list double linked
*
* Return: Nothing
**/

/*void swap(int *i, int j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
}*/

void lomuto_partition(int *arr, int low, int high, int size)
{
	int pivot, lo; //= arr[high];
	//int i = (low - 1);
	int aux = 0;
	
	if (low < high) {
		pivot = high;
		lo = high;

	for (int i = low; i < high; i++)
	{
		if (arr[i] < arr[pivot] && i != lo)
		{
			/**swap(&arr[i], &arr[j]);
			++i;*/

			aux = arr[i];
			arr[i] = arr[lo];
			arr[lo] = aux;
			print_array(arr, size);
		}
	}
	if (lo != pivot && arr[lo] != arr[pivot])
	{
		aux = arr[lo];
		arr[lo] = arr[pivot];
		arr[pivot] = aux;
		print_array(arr, size);
	}
	/**swap(&arr[i ], &arr[high]);
	return i;*/
	lomuto_partition(arr, low, lo - 1, size);
	lomuto_partition(arr, high + 1, high, size);
	}
}

void quick_sort(int *array, size_t size)
{
	/**if (low < high)
	{
		int high = high, wi = low;

	}*/
	lomuto_partition(array, 0, size - 1, size);
}
