#include <stdio.h>
int input()   /*simple function call*/
{
  printf("Enter a number\n"); 
  int a; 
    scanf("%d",&a);  
    return a;
}

int find_sum(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}

void output(int a, int b, int sum) 
/*void (blah blah), int(blah blah) name doesn't matter, the order within int main does*/
{
    printf("Sum of %d + %d is %d\n",a,b,sum);
}


int main()
{
    int x,y,z;
    x=input();
    y=input();
    z=find_sum(x,y);
    output(x,y,z);
    return 0;
}
