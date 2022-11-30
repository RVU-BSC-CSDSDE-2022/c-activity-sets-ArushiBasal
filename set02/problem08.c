[16:11, 16/11/2022] +91 90422 50989: #include <studio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int input_array_size()
{
  int n;
  printf("enter array size\n");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
      printf("enter next element\n");
      scanf("%d",&a[i]);
    }
  }

int is_composite(int n)
{ 
  for (int i=3;i<n;i++)
    {
      if(n %i == 0)
        return 1
    }
    return 0;
}

int sum_composite_numbers(int n, int a[n])
{
  int sum = 0;
  for(int i = 0; i < n; i++)
    if(is_composite(a[i]) == 1)
      sum += a[i];
  return sum;
}

void output(int sum)
{
  printf("The sum of composite numbers is %d\n",sum);
}

int main()
{
  int n;
  n=inpu…
[16:12, 16/11/2022] +91 90422 50989: set 3 problem 4
[14:58, 23/11/2022] Aishwarya: #inculde <stdio.h>
typedef struct _camel 
{
    float radius, height, length, weight;
} 
Camel;

int input_n()
{
  int n;
  printf("Enter the number of camels");
  scanf("%d\n",&n);
  return n;
}

Camel input_camel()
{ Camel c;
  printf("Enter the radius\n");
  scanf("%f",&c.radius);

  printf("Enter the height\n");
  scanf("%f",&c.height);

  printf("Enter the lenght\n");
  scanf("%f",&c.length);
  return c;
}
void input_n_camels

void input(int n, Camel c[n], float *truck_weight)
{
  for(int i=0;i<n;i++)
    c[i] = input_camel()
  printf("Enter truck weight\n");
  if ( scanf("%f",truck_weight) != 1) {
    printf("error\n");
    exit(0);
  }
}

void find_weight(Camel *c) 
{
   c->weight= 3.14*( pow(c->radius,3))*(sqrt(c->height*c->length));
   
}
float find_camel_weight(int n, Camel c[n])
{
  float total_weight=0;
  for(int i = 0; i<n; i++) {
    find_weight(&c[i]);
    total_weight += c[i].weight;
  }
  return total_weight;
}

  
}
float compute_total_weight(int n, Camel c[n], float truck_weight)
{
 float total_weight = find_camel_weight(n,c);
 total_weight += truck_weight;
 return total_weight;
}
void output(float total_weight)
{
  printf("Total weight of the truck with camels = %f",total_weight);
}
int main()
{
  int n = input_n();
  Camel c[n];
  float truck_weight, total_weight;
  input(n,c,&truck_weight);
  total_weight = compute_total_weight(n,c,truck_weight);
  output(total_weight);
  }