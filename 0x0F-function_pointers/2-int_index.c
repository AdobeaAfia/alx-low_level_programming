#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: desired array
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: Always successful when 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || cmp == NULL)
		return (-1);
	if  (size <= 0)
		return (-1);
	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
