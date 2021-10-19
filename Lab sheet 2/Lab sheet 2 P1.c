// Pavan Kumar J 20201CCS0094

#include<stdio.h>

int sum(int a, int b)
{
int total;
total = a+b;
return(total);
}
void main()
{
int result,m,n;
printf("Enter the value of m and n\n");
scanf("%d%d",&m,&n);
result=sum(m,n);
printf(" The result is %d\n",result);
}
