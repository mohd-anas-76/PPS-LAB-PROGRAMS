#include<stdio.h>
int main()
{
         int a[5],i,sum=0;
         for(i=0 ;i<=5 ;i++)
         {
                  scanf("%d",&a[i]);
                  sum += a[i];
         }
         printf("Sum of all numbers is %d\n",sum);
         return 0;
}
