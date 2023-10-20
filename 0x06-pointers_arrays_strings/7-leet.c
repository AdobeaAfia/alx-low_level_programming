#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int i, a;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (a = 0; a < 10; a++)
		{
			if (n[i] == s1[a])
			{
				n[i] = s2[a];
			}
		}
	}
	return (n);
}
