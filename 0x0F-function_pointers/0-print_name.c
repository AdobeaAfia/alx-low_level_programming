#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name print name
 * @name: the desired string to add
 * @f: a pointer to function
 * Return: When successful (nothing)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
