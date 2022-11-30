#include<stdio.h>

int input_number()
{
  int n;
  printf("Enter your number\n");
  scanf("%d",&n);
  return n;
}

int is_prime(int n)
{
  int count=0;
  for(int i=1; i<=n; i++)
    {
      if(n%i==0)
        count++;
    }
  return count;
}

void output(int n, int result)
  {
    if(result>2)
      printf("The number is not prime.");
    else
       printf("The number is prime.");
  }

int main()
  {
  int n, result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
  return 0;
  }