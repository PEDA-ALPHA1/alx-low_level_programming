#include "main.h"
/**
 * print_rev_recursion - Function prototype
 * Description: Print a string in reverse
 * Followed by a new line
 * @s: Pointer variable of type char
 * Return: void
 * **/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
