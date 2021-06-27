#include "holberton.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always void.
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
