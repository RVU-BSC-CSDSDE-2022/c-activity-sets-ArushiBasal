/* Write a C program to compare three numbers using **pass by reference***/
#include <stdio.h>
void input(int *a, int *b, int *c)
{
  printf("Enter 3 numbers\n");
  scanf("%d%d%d",a,b,c);
}

int compare(int a, int b, int c)
{
  if (b>a)
    a=b;
  if (c>a)
    a=c;
  return a;
}

int main()
{
  int j,k,l,m;
  input(&j,&k,&l);
  printf ("Values of j,k,l are\n");
  printf("%d %d %d\n",j,k,l);
  m = compare(j,k,l);

print("Largest number is %d\n",m);
return 0;
  }