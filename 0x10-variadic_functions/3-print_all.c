#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_c - prints a char
 * @ap: arguement pointer passed
 */

void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_i - prints an int
 * @ap: arguement pointer passed
 */

void print_i(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_f - prints float numbers
 * @ap: arguement passed
 */

void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - prints strings
 * @ap: arguement passed
 */

void print_s(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}
/**
 * print_all - prints all argurments passed no matter which type
 * @format: list of the arguement passed
 * struct var - strcture for variable args
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	var_p p[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};
	va_list ap;
	char *sep = "";

	va_start(ap, format);
	while (format[i] && format)
	{
		j = 0;
		while (p[j].c)
		{
			if (format[i] == p[j].c)
			{
				printf("%s", sep);
				p[j].f(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
