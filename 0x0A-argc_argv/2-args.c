#include <stdio.h>
#include "main.h"

/**
 * main - fnct prints all arg it receives
 * @argc: number of arg
 * @argv: array
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
