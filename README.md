[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=8481224&assignment_repo_type=AssignmentRepo)
# c-activity-sets
#include <stdio.h>

int size_array()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
   
    for(int i=0; i<n; i++)
    {
        printf("Enter the array elements\n");
        scanf("%d",a[i]);
    }
}
int sum_array(int n, int a[n])
{
int sum;
for(int i=0; i<=n; i++)
    {
        sum=sum+a[i];
    }
    return sum;
    }

void output(int sum)
{
printf("The sum of the elements in the array is %d", sum);
}
int main()
{
    int n, sum=0;
    n=size_array();
    int a[n];
    input_array(n, a);
    sum=sum_array(n,a);
    output(sum);
    return 0;
}
