#include "main.h"
/**
 * _isdigit - checks for a digit between 0 and 9
 * @c: character input
 * Return: 1 if input is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
