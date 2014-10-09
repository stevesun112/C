#include <stdio.h>

int power(int, int);

main()
{
  int num = 10;
  for (; num > 0; num--)
    power(num, 3);
  printf("The result of power(%d, 3) is %d ", num, power(num, 3));
  return 0;
}

int power(int x, int y)
{
  int result;
  if(y == 0)
    return result = 1;
  else if(x == 0)
    return result = 1;
  else 
    return result = x * power(x, --y);
}
