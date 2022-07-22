#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 * **/
int main(int argc, char *argv[])
{
	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* mulitply two arguments passed via cmd line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
