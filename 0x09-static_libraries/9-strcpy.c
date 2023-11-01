#include "main.h"
/**
 * char *_strcpy - program copies the desired string pointed to by src
 * @dest: copies string to
 * @src: copy string from
 * Return: the desired string value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
