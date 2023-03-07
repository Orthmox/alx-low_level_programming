#include <stdio.h>

int main(void)
{
  int n;
  int *p;
  int a[5];

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  printf("Addres of n: %p\n", &n);
  printf("Addres of n + 1: %p\n", &n + 1);
  printf("Addres of n + 2: %p\n", &n + 2);
  printf("Addres of n + 3: %p\n", &n + 3);
  printf("Addres of n + 4: %p\n", &n + 4);
  printf("Addres of n + 5: %p\n", &n + 5);
  printf("Addres of n + 6: %p\n", &n + 6);
  printf("Addres of p: %p\n", &p);
  printf("Address of a: %p\n", a);
  printf("Address of a[2]: %p", &a[2]);
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
