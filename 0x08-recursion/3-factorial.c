#include "main.h"
/**
 * factorial - Function Prototype
 * Description: Returns the factorial of a given number
 * @n: static variable of type int
 * Return: Always 0
 * **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
