#include <stdio.h>
#include "main.h"

/**
 * main - fnct print the num of arguments passed to the prgrm
 * @argc: number
 * @argv: array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
