#include "sort.h"

/**
* bubble_sort -  function that sorts an array of integers in ascending order
*@array: array to order
*@size: size of the array
*
* Return: Nothing
**/

void shell_sort(int *array, size_t size)
{
    size_t i, j, h;
    int temp;
    
    h = 1;
    while (h < size/3)
        h = 3 * h + 1;
    while (h >= 1)
    {
        for (i = h; i < size; i++)
        {
          temp = array[i];
          for (j = i; j >= h && array[j - h] > temp; j -= h)
            array[j] = array[j - h];
          array[j] = temp;
        }
        h /= 3;
        print_array(array, size);
    }
}
