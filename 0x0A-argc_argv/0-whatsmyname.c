#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Program that prints its name Followed by a new line
 *If program is renamed, it will print the new name
 * Without having to compile again
 * Also, do not remove the path before the name of the program
 * Return: Always 0
 * **/
int main (int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
