#include "main.h"
#include <stdio.h>
/**
 *main - whenre the program starts
 *@argc: This it the argument count
 *@argv: This is the argument vector
 *Return: 0 if sucessful else return 1
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
