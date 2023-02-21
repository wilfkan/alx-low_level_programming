#include "main.h"
#include <stdio.h>
/**
*_abs: computes the absolute value of an integer
*@x: integer
*Return: absolute value
*/
int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x < 0)
		return (-x);

	return (0);
}
