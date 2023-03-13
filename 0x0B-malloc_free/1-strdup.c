#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string input
 * Return: a pointer to the duplicated string, if insufficent memory return null
 */
char *_strdup(char *str)
{
	int n, x;
	char *ch;

	if (str == NULL)
		return ('\0');

	x = 0;
	while (*(str + x) != '\0')
		x++;

	ch = malloc((x + 1) * sizeof(char));
	if (ch == NULL)
		return ('\0');

	n = 0;
	while (n != x)
	{
		*(ch + n) = *(ch + n);
		n++;
	}

	return (ch);
}
