#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function Prototype
 * @n: Constant argument variable
 * @...: Ellipsis
 * Return: 0 if n == 0
 * **/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
