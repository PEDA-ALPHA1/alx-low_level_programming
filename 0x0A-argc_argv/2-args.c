#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 * **/
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
