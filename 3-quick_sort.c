#include "sort.h"

/**
* lomuto_partition - function Lomuto’s partition scheme.
*
* @arr: Array to process.
*
* @low: Pointer to first item.
*
* @high: Pointer to last item.
*
* @size: Number of items, or array size.
*
* Return: Nothing
**/

void lomuto_partition(int *arr, int low, int high, int size)
{
	int pivot, lo, i;
	int aux = 0;
	
	if (low < high) 
	{
		pivot = high;
		lo = low;

		for (i = low; i < high; i++)
		{
			if (arr[i] < arr[pivot])
			{
				if(i != lo)
				{
					aux = arr[i];
					arr[i] = arr[lo];
					arr[lo] = aux;
					print_array(arr, size);
				}
				lo++;
			}
		}
		if (lo != pivot && arr[lo] != arr[pivot])
		{
			aux = arr[lo];
			arr[lo] = arr[pivot];
			arr[pivot] = aux;
			print_array(arr, size);
		}
		lomuto_partition(arr, low, lo - 1, size);
		lomuto_partition(arr, lo + 1, high, size);
	}
}
/**
* quick_sort - Function that sorts an array of integers in ascending order.
*
*@array: Array to be sorted.
*
* Return: Nothing
**/

void quick_sort(int *array, size_t size)
{
	lomuto_partition(array, 0, size - 1, size);
}
