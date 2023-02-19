#include<stdio.h>
//call by referance function
float sum(int *x,float *y)
{
float s=*x+*y;
return s;
}
int main()
{
int a;
float b,s;
printf("Enter an integer number : ");
scanf("%d",&a);
printf("Enter a floating number : ");
scanf("%f",&b);
s=sum(&a,&b);
printf("sum of %d and %.2f = %8.2f",a,b,s);
return 0;
}
