#include "main.h"
#include <stdlib.h>
/**
 * str_concat - programs gets to the end of the input values
 * and adds them to get a value for the  size
 * @s1: input the value one to concat
 * @s2: input the value two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int b, cb;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		b = 0;
	while (s1[b] != '\0')
		b++;
	while (s2[cb] != '\0')
		cb++;
	conct = malloc(sizeof(char) * (b + cb + 1));
	if (conct == NULL)
		return (NULL);
	b = cb = 0;
	while (s1[b] != '\0')
	{
		conct[b] = s1[b];
		b++;
	}
	while (s2[cb] != '\0')
	{
		conct[b] = s2[cb];
		b++, cb++;
	}
	conct[b] = '\0';
	return (conct);
}
