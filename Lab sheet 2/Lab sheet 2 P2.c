#include <stdio.h>

// Pavan Kumar J 20201CCS0094

void sum(int a, int b)
{
int total;
total = a+b;
printf(" The result is %d\n",total);
}
void main()
{
int m,n;
printf("Enter the value of m and n\n");
scanf("%d%d",&m,&n);
sum(m,n);
}