#include "holberton.h"
/**
* function that prints alphabets in lowercase
* use prototype void print_alphabet(void)
* only use _putchar
* Return: 0
*/
void print_alphabet(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar (x);
}
_putchar ('\n');
}
