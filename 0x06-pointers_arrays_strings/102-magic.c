#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program demonstrates how to modify the value of a[2] indirectly
 * using pointer arithmetic and print the modified value.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int n;
    int a[5];
    int *p;
    a[2] = 1024;
    p = &n;

    /*
     * Write the value 98 to the memory location calculated by adding 5 integers (20 bytes) to the address
     * pointed by p. This indirectly modifies the value of a[2].
     */
    *(p + 5) = 98;

    printf("a[2] = %d\n", a[2]);

    return (0);
}
