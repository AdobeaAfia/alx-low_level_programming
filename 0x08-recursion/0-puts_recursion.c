#include "main.h"

/**
 * _puts_recursion - Print a string follwed a new line using recursion
 * @s: The string to print
 * Return: Always successful (0)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
