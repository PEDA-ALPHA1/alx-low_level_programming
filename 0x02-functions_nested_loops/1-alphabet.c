#include "holberton.h"
/**
* main - Entry point
* function that prints alphabets in lowercase
* use prototype void print_alphabet(void)
* only use _putchar
* Return: Always void
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
