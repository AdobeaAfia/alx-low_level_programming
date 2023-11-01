#include "main.h"
/**
 * _puts - Prints a string to stdout
 * @str: The string to be printed
 * _putchar prints a new line
 * Return: Always Successful (0)
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar ('\n');
}
