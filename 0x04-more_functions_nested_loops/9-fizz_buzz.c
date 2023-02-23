#include <stdio.h>
/**
 *main - prints numbers from 1 to 100
 *Return: Always 0
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("Fizzbuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fiz");
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");
	return (0);
}
