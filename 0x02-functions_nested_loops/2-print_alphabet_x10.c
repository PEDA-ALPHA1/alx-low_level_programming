#include "holberton.h"
/**
* main - Entry point
* function that prints x10 the alphabets in lowercase
*Return: Always void
*/
void print_alphabet_x10(void);
{
int i;
for (i = 97; i <= 122; i++)
{
putchar (i);
}
putchar ('\n');
}
