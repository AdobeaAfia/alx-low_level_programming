#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - A program that prints strings,
* followed by a new line.
* @separator: The preferred string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
* Description: Separator NULL, do not print and  of nil print.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int pointer;

	va_start(strings, n);
	for (pointer = 0; pointer < n; pointer++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (pointer != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
