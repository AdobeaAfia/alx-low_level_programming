#include "main.h"

/**
 * _strlen - finds the length of string
 * @s: string to be counted
 * Return: length of string
 */

int _strlen(char *s)
{
	int a;
	int count = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		count++;

	return (count);
}
