#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	a = 97;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar('\a');
	return (0);
}
