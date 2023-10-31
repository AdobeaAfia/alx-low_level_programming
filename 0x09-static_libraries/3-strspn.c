#include "main.h"
/**
 * _strspn - Starting point
 * @s: input desird variable
 * @accept: input desired variable
 * Return: Always Successful (0)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i;
	
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
