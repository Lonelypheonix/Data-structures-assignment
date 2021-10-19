#include<stdio.h>
// Pavan Kumar J 20201CCS0094
int factorial(int n)
{
    if(n==0)  
       return(1);
   else
      return(n*factorial(n-1));
}
void main()
{
    int n,result;
    printf("enter any number \n");  
    scanf("%d",&n);  
    result=factorial(n);  
    printf("%d factorial is %d \n",n,result);
}
