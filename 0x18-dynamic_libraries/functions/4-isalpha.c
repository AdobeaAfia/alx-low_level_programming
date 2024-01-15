#include "main.h"

/**
 * _isalpha - the code checks for alphabetic character
 * @c: the desired character to be checked
 * Return: 1 if c is a letter, 0 if its not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
