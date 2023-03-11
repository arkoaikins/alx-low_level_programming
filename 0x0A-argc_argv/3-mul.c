#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - whenre the program starts
 *@argc: This it the argument count
 *@argv: This is the argument vector
 *Return: 0 if sucessful else return 1
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	j = atoi(argv[2]);
	x = i * j;

	printf("%i\n", x);
	return (0);
}
