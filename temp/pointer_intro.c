#include <stdio.h>

int main()
{ int n = 10;
  int *p = &n;
  
  printf("Value of int is %i \n", n);
  printf("Memory address of int is %p \n", &n);
  printf("Value of Pointer %p \n", p);
  printf("Address of pointer is %p \n", &p);
  return 1;
}


