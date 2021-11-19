#include <stdio.h>

void binario();

int main()
{
  int n;
  scanf("%d", &n);
  binario(n);

  return 0;
}


void binario(int n)
{

  if(n > 1)
  {
    binario(n/2);
    printf("%d\n", n % 2);
  }
  else
    printf("%d\n", n);

}
