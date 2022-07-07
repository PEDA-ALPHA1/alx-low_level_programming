#include "main.h"
/**
 * checks for uppercase character.
 * use prototype: int _isupper(int c);
 * return 1 if c is uppercase
 * return 0 otherwise
 */
int _isupper(int x)
{
	if (x >= 65 && x <=90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
