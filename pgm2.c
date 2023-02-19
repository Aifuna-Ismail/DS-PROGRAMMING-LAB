#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter a number:");
scanf("%d",&n);
int a[n];
printf("Enter %d integers:\n",n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2!=0)
sum=sum+a[i];
}
printf("Sum of odd numbers is : %d",sum);
return 0;
}
