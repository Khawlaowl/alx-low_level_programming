#include "main.h"

/**
 * print_binary - fnct Prints the binary nbr
 * @n: nmbr
 */
void print_binary(unsigned long int n)
{
	int s = sizeof(unsigned long int) * 8 - 1;
	int f = 0;

	while (s >= 0)
	{
		unsigned long int bit = n >> s;

		if (bit & 1)
		{
			putchar('1');
			f = 1;
		}
		else if (f)
		{
			putchar('0');
		}

		s--;
	}

	if (!f)
		putchar('0');
}
