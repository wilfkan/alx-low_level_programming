#include "main.h"
/**
 *more_numbers - prints the numbers from 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int num, char;

	for (num = 0; num < 10; num++)
	{
		for (char = 0; char < 15; char++)
		{
			if (char >= 10)
				_putchar((char / 10) + 48);
			_putchar((char % 10) + 48);
		}
		_putchar('\n')
	}
}
