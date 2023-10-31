#include "main.h"

/**
 * char *_strcpy - program copies the string pointed to by src
 * @dest: copy to desired location
 * @src: copy from from desired location
 * Return: desired string value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int k = 0;
	
	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; k < i ; k++)
	{
		dest[k] = src[k];
	}
	dest[i] = '\0';
	return (dest);
}
