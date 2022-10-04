#include "main.h"
int _strlen(char *s);
/**
* _strncat - concatenate two strings
* @dest: string
* @src: string
* @n: number of elements to concatenate in
* Return: pointer to resulting `dest`
*/
char *_strncat(char *dest, char *src, int n)
{
int size1 = _strlen(dest);
int size2 = _strlen(src);
int x;
int y = 0;
if (n > size2)
{
n = size2;
}
for (x = size1; x < (size1 + n); x++)
{
dest[x] = src[y];
y++;
}
if (n < size2)
{
dest[x] = '\0';
}
return (dest);
}
/**
* _strlen - swap funcion
* @s: Number that is going to be splited
* Return: Return the last digit
*/
int _strlen(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
return (c);
}
