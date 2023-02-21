#include "main.h"
/**
 * print_alphabet_x10 - prints alpahbets in lowercase 10x
 *
 */
void print_alphabet_x10(void)
{
	char lett;
	int num;

	for (num = 1; num <= 10; num++)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
		{
			_putchar(lett);
		}
		_putchar('\n');
	}
}
