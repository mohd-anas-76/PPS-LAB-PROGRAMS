#include<stdio.h>
#include<math.h>
int main()
{
         float a,b,c,D,r1,r2,real,I;
         printf("\nQuatradic equation is in the form: ax^2 + bx +c = 0");
         printf("\nEnter the coefficent a,b and c: ");
         scanf("%f%f%f",&a,&b,&c);
         D=b*b-4*a*c;
         if(D>0)
         {
                  r1=(-b + sqrt(D))/(2*a);
                  r2=(-b - sqrt(D))/(2*a);
                  printf("\nRoot1 = %.2f",r1);
                  printf("\nRoot2 = %.2f",r2);
         }
         else if(D==0)
         {
                  r1= -b/(2*a);
                  printf("\nBoth roots are equal");
                  printf("\nRoot = %.2f\n",r1);
         }
         else
         {
                  real= -b/(2*a);
                  I= sqrt(-D)/(2*a);
                  printf("\nThe roots are imaginary.\n");
                  printf("Root 1 = %.2f+%.2fi\n",real,I);
                  printf("Root 2 = %.2f-%.2fi\n",real,I);
         }
         return 0;


}
