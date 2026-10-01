
#include <stdio.h>
int main()
{
int n, i, j, count;
printf("Enter the value of n: ");
scanf("%d",&n);
printf("Prime numbers between I and %d are:\n", n);
for (i = 2; i <= n; i++)
{
count=0;

  for (j=l;j<=i;j++)
  {
  if (i%j==0)
    {
    count++;
    }
  }
if (count==2)
{
printf("%d ", i);
}
}
return 0;
}
