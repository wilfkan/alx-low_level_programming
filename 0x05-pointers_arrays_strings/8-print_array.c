#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *
 * @n: number of elements in array
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; ++1)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf('\n');
}
