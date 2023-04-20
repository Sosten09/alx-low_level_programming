#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list program;
	char *se;
	unsigned int alx;

	va_start(program, n);

	for (alx = 0; alx < n; alx++)
	{
		se = va_arg(program, char *);

		if (se == NULL)
			printf("(nil)");
		else
			printf("%s", se);

		if (alx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(program);
}

