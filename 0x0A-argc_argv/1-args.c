#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Program that prints the number of arguments passed into it
 * Print a number, followed by a new line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 * **/
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
