#include "main.h"
#include <stdlib.h>
/**
 * argstostr - starting point
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			j++;
	}
	j += ac;
	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
	{
		str[c] = av[a][b];
		c++;
	}
		if (str[c] == '\0')
	{
		str[c++] = '\n';
	}
	}
	return (str);
}
