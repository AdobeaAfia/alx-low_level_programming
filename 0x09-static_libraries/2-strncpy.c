#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: input desired value
 * @src: input desired value
 * @n: input desired value
 * Return: dest when successful
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n);
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
