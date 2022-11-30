#include<stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the x co-ordinate of the first point\n");
  scanf("%f", x1);
  printf("Enter the y co-ordinate of the first point\n");
  scanf("%f", y1);
  printf("Enter the x co-ordinate of the second point\n");
  scanf("%f", x2);
  printf("Enter the y co-ordinate of the second point\n");
  scanf("%f", y2);
  printf("Enter the x co-ordinate of the third point\n");
  scanf("%f", x3);
  printf("Enter the y co-ordinate of the third point\n");
  scanf("%f", y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  if ((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2))!=0)
    return 0;
  else return 1;   
}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if ( result == 0)
  printf("The points (%f%f), (%f%f) and (%f%f) don't form a triangle.\n",x1,y1,x2,y2,x3,y3);
  else
 printf("The points (%f%f), (%f%f) and (%f%f) form a triangle.\n",x1,y1,x2,y2,x3,y3);
}

int main()
{
  float x1, x2, x3, y1, y2, y3;
  int result;
  input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
  result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0; 
}

