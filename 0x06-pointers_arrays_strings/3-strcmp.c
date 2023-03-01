#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if s1 and s2 are equals, another number if not
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, l = 0;

	while (l == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		l = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (l);
}
