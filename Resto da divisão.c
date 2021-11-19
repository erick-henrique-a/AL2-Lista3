#include <stdio.h>
#include <stdlib.h>


int MOD();

int main()
{
  int x, y, f=0;
  double X;

  scanf("%lf", &X);
  x = X;
  if(X != x)
    f = -1;

  scanf("%lf", &X);
  y = X;
  if(X != y)
    f = -1;


  if(f != -1)
    MOD(x,y);
  else
    printf("-1\n");

  return 0;
}

int MOD(int x, int y)
{
  if(abs(x) >= abs(y))
  {
    MOD(abs(x)-abs(y),abs(y));
  }

  else if(abs(x) < abs(y))
  {
    printf("%d\n", abs(x));
  }

  return 0; //<----
}
