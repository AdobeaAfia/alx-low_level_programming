#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input desired value
 * @accept: input desired value
 * Return: Always Successful (0)
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int r;

	while (accept[r])
	{
		if (*s == accept[r])
			return (s);
		r++;
	}
	s++;
	}
	return ('\0');
}
