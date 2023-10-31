#include "main.h"

/**
 * _memset - Program fills a block of memory with a desired value
 * @s: address start of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int b = 0;

	for (; n > 0; b++)
	{
		s[b] = a;
		n--;
	}
	return (s);
}
