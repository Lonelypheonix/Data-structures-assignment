#include <stdio.h>

// Pavan Kumar J 20201CCS0094

int sum()
{
int total,a,b;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
total = a+b;
return(total);
}
void main()
{
int result;
result=sum();
printf(" The result is %d\n",result);
}