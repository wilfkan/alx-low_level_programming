#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string
 *
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	char *rev;

	rev = s;
	if (*rev != 0)
	{
		_print_rev_recursion(rev + 1);
		_putchar(*s);
	}
}
