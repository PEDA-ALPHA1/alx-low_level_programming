#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - Function prototype
 *@array: Pointer of type int
 *@size: Size of array
 *@action: Pointer to function
 * **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int x;

	if (array != NULL && action != NULL)
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
