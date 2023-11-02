#include "main.h"
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size, in bytes, of the allocated space of ptr.
 * @new_size: new size, in bytes, of the new memory block.
 * Return: if new_size == old_size, returns ptr without changes.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
}
