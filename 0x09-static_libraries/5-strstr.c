#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: desired input
 * @needle: desired input
 * Return: Always Successful (0)
 */

char *_strstr(char *haystack, char *needle)
{
        	for (; *haystack != '\0'; haystack++)
        	{
                    	char *m = haystack;
                    	char *n = needle;
 
                    	while (*m == *n && *n != '\0')
                    	{
                                	m++;
                                	n++;
                    	}
 
                    	if (*n == '\0')
                                	return (haystack);
        	}
 
        	return (0);
}
