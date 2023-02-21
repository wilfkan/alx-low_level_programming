#include "main.h"

/**
 * main - prints alphabets in lower case
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

	return (0);
}
