#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * betty_sqrt_recursion - Computes the natural square root of a number.
 * @n: The number for which to calculate the square root.
 * Description: This function determines whether the given number is prime or not.
 *
 * Return: The calculated square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * betty_actual_sqrt_recursion - Recursively computes the natural
 * square root of a number.
 * @n: The number for which to calculate the square root.
 * @i: An iterator used in the recursion.
 * Description: This function determines whether the given number is prime or not.
 *
 * Return: The calculated square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
