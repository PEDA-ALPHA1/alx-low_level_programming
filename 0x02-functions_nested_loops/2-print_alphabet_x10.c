#include "holberton.h"
/**
* main - Entry point
* print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase, followed by a new line.
* Return: Always void
*/
void print_alphabet_x10(void)
{
int i;
int j;
for(i = 1; i <= 10; i++)
{
for (j = 97; j <= 122; j++)
{
_putchar (j);
}
_putchar ('\n');
}
}