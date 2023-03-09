#include "main.h"
/**
 * get_prime - checks a number if its a prime number or not
 *
 * @p: number
 * 
 * @v: variable
 *
 * Return: 1 if p is prime and o if otherwise
 */
int get_prime(int v, int p)
{
	if (p == v)
		return (1);
	else if (p % v == 0)
		return (0);
	else
		return (get_prime(v + 1, p));
}

/**
 * is_prime_number - prints prime numbers
 *
 * @n: number
 *
 * Return: 1 if n is prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (get_prime(2, n));
}
