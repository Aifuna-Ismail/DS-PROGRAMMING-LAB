#include<stdio.h>
int main()
{
int a;
float b,sum;
printf("Enter an integer number : ");
scanf("%d",&a);
printf("Enter a floating number : ");
scanf("%f",&b);
sum=a+b;
printf("sum of %d and %8.2f = %8.2f",a,b,sum);
return 0;
}
