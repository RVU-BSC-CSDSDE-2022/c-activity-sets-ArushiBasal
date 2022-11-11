#include <stdio.h>
int input()
{
  int a;
  printf("Enter the number\n");
  scanf("%d", &a);
  return a;
}
int compare (int a, int b, int c)
{
  if (a>b && a>c)
    return a;
  else if (b>a && b>c)
    return b;
  else
    return c;
}
int main ()
{
  int w,x,y,z;
  w=input();
  x=input();
  y=input();
  z=compare(w,x,y);
  printf("The largest number among %d, %d and %d is %d",w,x,y,z);

return 0;
}
  