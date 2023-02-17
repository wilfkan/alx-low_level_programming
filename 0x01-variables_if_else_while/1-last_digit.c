#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int w;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	w = n % 10;

	if (w > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, w);
	}
	else if (w == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, w);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, w);
	}
	return (0);
}
