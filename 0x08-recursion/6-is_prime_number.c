#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: The number to be evaluated.
 *
 * Return: 1 if n is a prime number, 0 if it is not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates if a number is prime recursively
 * @n: The number to be evaluated.
 * @i: An iterator used in the recursion.
 * Description: This function checks whether the input string is a palindrome or not. 
 *
 * Return: 1 if n is prime, 0 if it is not.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

