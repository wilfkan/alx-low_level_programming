#include "main.h"
/**
 *swap_int - swaps the values of two integers
 *
 *@a: integer 1
 *@b: integer 2
 *
 *Return: no return
 */
void swap_int(int *a, int *b)
{
	int subete = *a;
	*a = *b;
	*b = subete;
}
