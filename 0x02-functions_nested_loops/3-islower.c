#include "holberton.h"
/**
* int _islower(int c) - check for lowercase character
* Return: 1 if c is lower
* Return: 0 otherwise
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
