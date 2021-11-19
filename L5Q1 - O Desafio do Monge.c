#include <stdio.h>

int funcao();

int main()
{
  int n;
  while(scanf("%d", &n) != EOF)
    printf("%d\n", funcao(n));
  return 0;
}


int funcao(int n)
{
  int x;

  if(n == 0)
    x = 10;
  else if(n == 1)
    x = 11;
  else if(n == 2)
    x = 27;
  else
    x = funcao(n - 2) - funcao(n - 3);


  return x;
}