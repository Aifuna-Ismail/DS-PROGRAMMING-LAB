#include<stdio.h>
int main()
{
int n,m;
float sum=0.0;
printf("Enter a divisor:");
scanf("%d",&m);
printf("Enter a number:");
scanf("%d",&n);
int a[n];
printf("Enter %d integers:\n",n);
/* sum of n integers remainder*/
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
float remainder=0.0;
remainder=a[i]%m;
sum=sum+remainder;
}
printf("Sum of %d numbers remainder is : %8.3f",n,sum);
return 0;
}
