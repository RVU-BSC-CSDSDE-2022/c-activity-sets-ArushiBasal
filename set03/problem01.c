#include <stdio.h>
  void input_triangle(float *base, float *height)
{
  printf("Enter base and height\n");
  scanf("%f%f",base,height);
}

int find_area(float base, float height)
{
  float area = 0.5 * height * base;
  return area;
}

void output(float base, float height, float area)
{
  printf("The area of the triangle with %f as the base and %f as the height is %f",base, height, area);
}

int main (void)
{
  float base, height, area;
  input_triangle (&base, &height);
  area = find_area(base,height);
  output(base,height,area);
  return 0;
  }
