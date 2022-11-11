#include <stdio.h>
int input(int *a, int *b) 
/*use void when you don't have to return*/
{
  printf("Enter two numbers");
scanf(" %d%d",a,b);
  return input;
}
void add(int a, int b, int *c) 
/*call by value is a,b and call by reference is c*/
{
  *c = a + b;
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z); /*call by value (x and y) and reference (z)*/
  printf("%d + %d is %d\n",x,y,z);
  return 0;
}