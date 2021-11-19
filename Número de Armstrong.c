#include <stdio.h>
#include <math.h>

int contaDigito();
int armstrong();
int tam;

int main()
{
  int x;
  scanf("%d", &x);
  tam = contaDigito(x);
  if(armstrong(x) == x)
    printf("Armstrong\n");
  else 
    printf("soma: %d\n", armstrong(x));
  return 0;
}

int armstrong(int x)
{
  int valor;

  if(x >= 10)
    valor = pow(x%10, tam) + armstrong(x/10);
  else
    valor = pow(x, tam);

  return valor;
}


int contaDigito(int x)
{
  int qtd;

  if(x >= 10)
    qtd = 1 + contaDigito(x / 10);
  else
    qtd = 1;

  return qtd;
}