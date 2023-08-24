#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * Corrected line of code:
   * Assign the value 98 to the memory location pointed to by p + 5.
   * This effectively modifies the value of a[2].
   */
  *(p + 5) = 98;

  printf("a[2] = %d\n", a[2]);
  return (0);
}
