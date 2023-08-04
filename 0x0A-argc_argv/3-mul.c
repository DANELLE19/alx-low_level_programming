#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multification of two args numbers
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Description: Multiplies two integers provided as command-line arguments
 * and prints the result
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 3)
{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
