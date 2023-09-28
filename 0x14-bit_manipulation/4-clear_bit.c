#include "main.h"

/**
 * clear_bit - fnct that Clears the value of a bit
 * @n: Pntr
 * @index: The index of the bit
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int m = 1UL << index;
	*n &= ~m;

	return (1);
}
