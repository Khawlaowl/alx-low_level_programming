#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
/*
 * Write a single line of code here that meets the following requirements:
 * - You cannot use variable 'a'.
 * - You cannot modify pointer 'p'.
 * - You must use only one statement.
 * - You cannot code anything else other than this line of code.
 *\
 *(p + 5) = 98;
 /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
