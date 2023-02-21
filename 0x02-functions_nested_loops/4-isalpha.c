#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 *
 *@c: character
 *
 * Return: 1 if lowercase, 0 if uppercase 
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');	
}		
