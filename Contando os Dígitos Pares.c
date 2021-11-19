#include <stdio.h>

int ContaDigitosPares();

int main()
{
  int x;
  scanf("%d", &x);
  printf("%d\n", ContaDigitosPares(x));
  // printf("%d\n%d\n", x%10, x/10);
  return 0;
}


int ContaDigitosPares(int x)
{
  int qtd;
  
  if(x >= 10 || (x < 0 && x <= -10))
  {
    if((x % 10) % 2 == 0)
      qtd = 1 + ContaDigitosPares(x / 10);
    else
      qtd = ContaDigitosPares(x / 10);
  }
  
  else if(x < 10 && x > -10)
  {
    if(x % 2 == 0)
      qtd = 1;
    else
      qtd = 0;
  }



  return qtd;
  
}