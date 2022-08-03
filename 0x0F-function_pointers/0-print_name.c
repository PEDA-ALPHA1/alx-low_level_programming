#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - Function prototype
 *@name: Pointer variable of type char
 *@f: Pointer to a function of type char
 *Description: Prints a name
 * **/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL || name != NULL)
	f(name);
}
