#include "main.h"
#include <stdlib.h>

/**
 * * malloc_checked - allocates memory using malloc
 * * @b: number of bytes
 * * Return: Returns a pointer to allocated memory
 * **/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
