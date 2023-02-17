#include <stdio.h>
#include <ctype.h>
/**
 * main - print lowercase followed by uppercase alphabets
 *
 * Return: 0, if succesful but returns 1 if unsuccesfull
 */
int main(void)
{
	char lc;

	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(lc);
	}
	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(toupper(lc));
	}
	putchar('\n');
	return (0);
}
