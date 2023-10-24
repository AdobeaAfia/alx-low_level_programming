#include "main.h"

/**
 * set_string - Set the value of pointer to char
 * @s: Pointer yo a pointer to char
 * @to: Pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
