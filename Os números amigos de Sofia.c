#include <stdio.h>

int amigos();
int div();
int f=0;

int main()
{
  int x,y, qtd, i, j;
  
  scanf("%d%d", &x, &y);
  amigos(x, y);

  if(f != 1)
    printf("Nao existem numeros amigos\n");

  return 0;
}


int amigos(int x, int y)
{
  int i, j;

  for(i = x; i <= y; i++)
  {
    for(j = x; j <= i; j++)
      if(div(j) == i)
      {
        printf("%d e amigo de %d\n", j, i);
        f = 1;
      }
  }

  return 0;
}


int div(int x)
{
  int i, soma=0;

  for(i = 1; i < x; i++)
    if(x % i == 0)
      soma += i;
  
  return soma;
}