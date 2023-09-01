#include <unistd.h>
/**
 * _putchar - write char c stdout
 * @c: char to print
 *
 * return: 1 success
 * on error  -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
