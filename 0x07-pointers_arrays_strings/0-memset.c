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

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
