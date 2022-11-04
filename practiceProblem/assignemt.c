#include <stdio.h>

int main()
{
  int n, r, s;
  printf("Please Enter any value\n");
  scanf("%d", &n);
  for (s=0; n > 0;n=n/10)
  {
     r = n % 10;
     s=s+ r;
  }
  printf("\n Sum of the digits = %d", s);
  return 0;
}
