#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line
 * @separator: The desired string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int pointer;

	va_start(nums, n);
	for (pointer = 0; pointer < n; pointer++)
	{
		printf("%d", va_arg(nums, int));
		if (pointer != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
