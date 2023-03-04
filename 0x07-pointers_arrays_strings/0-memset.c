#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the memory area
 * @b: byte of memory
 * @n: number of bytes filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
