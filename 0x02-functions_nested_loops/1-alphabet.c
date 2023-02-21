#include "main.h"

/**
 * main - prints alphabets in lower case
 *
 */
void letters_lowercase(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
