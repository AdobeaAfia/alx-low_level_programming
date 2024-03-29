#include "main.h"
/**
 * _strncpy - copy and find the length of a string
 * @dest: input value of string to be counted
 * @src: input value of string to be counted
 * @n: input value of string to be counted
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
