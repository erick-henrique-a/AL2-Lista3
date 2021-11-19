#include <stdio.h>

int ocorrencia();

int main()
{
  long long int n;

  scanf("%lld", &n);
  printf("%d\n", ocorrencia(n));

  return 0;
}


int ocorrencia(long long int n)
{
  int qtd;

  if(n >= 10)
    qtd = 1 + ocorrencia(n/10);
  
  else
    qtd = 1;


  return qtd;
}