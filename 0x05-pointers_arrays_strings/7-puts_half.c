#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: string input
 *
 * Return: no return
 */
void puts_half(char *str)
{
	int count = 0, l;

	while (count >= 0)
	{
		if (str[count] =='\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		l = count / 2;
	else
		l = (count - 1) / 2;

	for (l++; l < count; l++)
		_putchar(str[l]);
	_putchar('\n');
}
