#include <stdio.h>
#include <ctype.h>
/**
 * main - to print all single numbers of base 10
 *
 * Return: 0, if succesful but return 1 if unsuccesful
 */
int main(void)
{
	int x;
	/*to print all single numbers of base 10,loop through them*/
	for (x = 0 ; x < 10 ; x++)
	printf("%d", x);
	printf("\n");
	return (0);
}
