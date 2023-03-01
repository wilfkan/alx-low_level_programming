#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @n: number of elements of the array
 * @a: array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			t = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = t;
		}
	}
}
