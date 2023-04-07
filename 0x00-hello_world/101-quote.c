#include<unistd.h>
/**
 * main - program that prints a string to the standard error
 * the 2 means write it to the standard error
 * and the last numeber determins the lines of code written
 * Return: 1, if succesful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
