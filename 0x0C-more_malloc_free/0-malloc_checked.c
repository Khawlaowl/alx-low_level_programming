#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - fnct that allocates memory using malloc
 * @b: nmbr of bytes to allocate
 *
 * Return: On success, a pointer to the allocated memory.
 *         On failure, exit with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
