#include "main.h"
/**
 * _strncat - this program concatenates two strings
 * using at most n bytes from src
 * @dest: desired value
 * @src: desired value
 * @n: desired value
 * Return: When dest is successful (0)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
