#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	int i = 0;
	char form;
	char *str;

	va_start(ar, format);
	while (format != NULL && format[i])
	{
		form = format[i];
		switch (form)
		{
			case 'c':
				printf("%c", va_arg(ar, int));
				break;
			case 'i':
				printf("%d", va_arg(ar, int));
				break;
			case 'f':
				printf("%f", va_arg(ar, double));
				break;
			case 's':
				str = va_arg(ar, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		if ((form == 'c' || form == 'i' || form == 'f' || form == 's')
				&& format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ar);
}
