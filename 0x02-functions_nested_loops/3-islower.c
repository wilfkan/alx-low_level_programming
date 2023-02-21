#include "main.h"
/**
 * int _islower - checks for lowercase characters
 *
 * Return: 0 if c uppercase, 1 if c lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
