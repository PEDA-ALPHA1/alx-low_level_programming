#include "main.h"
/**
 * print_most_numbers - Function prototype
 * Description: Print the numbers from 0 t0 9, followed by a new line
 * Don't print 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '2' && x == '4')
		{
			x++;
		}
		else
		{
			_putchar(x);
		}
	}

	_putchar('\n');
}
