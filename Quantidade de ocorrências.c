#include <stdio.h>

int ocorrencia();

int main()
{
  long long int n;
  int x;

  scanf("%lld", &n);
  scanf("%d", &x);
  printf("%d\n", ocorrencia(n, x));

  return 0;
}


int ocorrencia(long long int n, int x)
{
  int qtd;

  if(n > 9)
  {
    if(n % 10 == x)
      qtd = 1 + ocorrencia(n / 10, x);
    else if(n % 10 != x)
      qtd = ocorrencia(n / 10, x);
  }
  else if(n <= 9)
  {
    if(n == x)
      qtd = 1;
    else
      qtd = 0;
  }

  return qtd;
}