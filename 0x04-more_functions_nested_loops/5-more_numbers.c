#include "main.h"
/**
 * more_numbers - Function prototype
 * Description: Print 10 times the numbers from 0 to 14 followed by a new line
 * Return: Always o
 */
void more_numbers(void)
{
	int x;
	int z;

	for (x = 0; x <= 10; x++)
	{
		for (z = 0; z <= 14; z++)
		{
			_putchar(z);
		}
	_putchar('\n');
	}
	_putchar('\n');
}
