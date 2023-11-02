#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The desired character to print
 * Return: Successful (0), Error (-1) 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
