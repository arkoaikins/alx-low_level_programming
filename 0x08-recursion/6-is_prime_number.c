#include "main.h"

int prime_identifier(int n, int i);

/**
 *is_prime_number - identifies prime number
 *@n: the prime number
 *Return: 1 if prime.else 0
 */

int is_prime_number(int n)
{
	return (prime_identifier(n, 1));
}

/**
 *prime_identifier - checks for prime number
 *@n: the number to be checked
 *@i: the iterator
 *Return:  1 if prime.else 0
 */

int prime_identifier(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (prime_identifier(n, i + 1));
}
