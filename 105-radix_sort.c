#include "sort.h"
/**
 * radix_sort - Function that sort an array of integers in ascending
 * order.
 *
 * @array: Array to process.
 *
 * @size: size of the array.
 *
 * Return: No return.
 */

void radix_sort(int *array, size_t size)
{
	int new = 1, n = 10;
	size_t i = 0;

	if (array == NULL || size == 1)
		return;

	while (new != 0)
	{
		new = 0;
		i = 1;
		while (i < size)
		{
			if ((array[i - 1] % (n * 10)) / ((n * 10) / 10) > 0)
				new = 1;
			if (((array[i - 1] % n) / (n / 10)) > ((array[i] % n) / (n / 10)))
			{
				array[i - 1] = array[i - 1] + array[i];
				array[i] = array[i - 1] - array[i];
				array[i - 1] = array[i - 1] - array[i];

				if ((i - 1) > 0)
					i -= 2;
			}
			i++;
		}
		print_array(array, size);
		n *= 10;
	}
}
