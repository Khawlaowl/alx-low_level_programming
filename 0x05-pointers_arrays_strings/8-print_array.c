#include "main.h"

/**
 * print_array - Prints the first n elements of a given array.
 * @a: The array to be printed.
 * @n: The number of elements of the array to be printed.
 * Return: Nothing (prints the elements of the array).
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
