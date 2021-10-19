//Pavan Kumar J 20201CCS0094

#include<stdio.h>
int fact(int n)
{
int fact,i;
fact=1;
for(i=1;i<=n;i++)
fact=fact*i;
printf("The factorial is %d",fact);
}
int main()
{
int i,n;
printf("enter the value of n \n");
scanf("%d",&n);
fact(n);
return 0;
}