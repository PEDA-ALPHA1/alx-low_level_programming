#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Function prototype
 * Description: Create an array of chars, initialized with a specific char
 * @size: size of array
 * @c:fill array values with this char
 * Return: Pointer to the array
 * **/
char *create_array(unsigned int size, char c)
{
	char *arr; /* array declaration */
	int i; /* indexing (will loop through array) */

	arr = malloc(size * sizeof(char));

	 /*memory allocation using malloc*/
	if (arr == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < (int)size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
