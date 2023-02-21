#include "main.h"
/**
 *print_last_digit -  prints the last digit of a number
 *
 * @x: number
 * Return: value of last digit
 */
int print_last_digit(int x)
{
	int last_digit = x % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
