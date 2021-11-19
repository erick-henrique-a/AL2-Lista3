#include <stdio.h>

int decrementa();

int main()
{
  int n;
  scanf("%d", &n);
  n = n - decrementa(n);
  printf("%d\n", n);
  return 0;
}


int decrementa(int n)
{
  int x;

  if(n > 9)
    x = decrementa(n/10);

  
  if(n < 10)
  {
    if(n % 2 == 0)
      x = 4;
    else
      x = 3;
  }

  return x;
}