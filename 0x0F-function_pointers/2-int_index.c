#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: number pf elements in the array
 * @cmp: is a pointer to the function to compare values
 * Return: index of the first element otherwise return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		if (cmp(array[i]) == 0)
			return (-1);
	}
	else
		return (-1);
	return (i);
}
