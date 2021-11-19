#include <stdio.h>

int nome();
int fibo();
int n;

int main()
{
  scanf("%d", &n);
  nome(1);

  return 0;
}


int nome(int i)
{

  if(i <= n)
  {
    if(fibo(i) == 1)
      printf("O");
    else
      printf("o");

    i++;
    nome(i);
  }

  return 0;
}

int fibo(int x)
{
  int flag=0, i, n1=0, n2=1, n=1;

  for(i = 2; n <= x; i++)
  {
    //printf("n=%d, x=%d\n", n, x);
    if(n == x)
      flag = 1;
    
    n = n1 + n2;
    n1 = n2;
    n2 = n;
  }

  return flag;
}