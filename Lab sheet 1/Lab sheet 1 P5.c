
#include<stdio.h>
// Pavan Kumar J 20201CC0094
int main()
{
  char operator;
  int a,b,res;
  printf("enter the values of a and b\n");
  scanf("%d%d",&a,&b);
  printf("enter the operator\n");
  scanf(" %c",&operator);
  if(operator=='+')
  {
    res=a+b;
    printf("addition of %d and %d is %d\n",a,b,res);
  }

  else if(operator=='-')
  {
    res=a-b;
    printf("Difference of %d and %d is %d\n",a,b,res);
  }
           
  else if(operator=='*')
  {
    res=a*b;
    printf("product of %d and %d is %d\n",a,b,res);
  }
  
  else if(operator=='/')
  {
    res=a/b;
    printf("Quotient of %d and %d is %d\n",a,b,res);
  }
            
  else if(operator=='%')
  {
    res=a%b; 
    printf("Remainder of %d and %d is %d\n",a,b,res);
  }
  else 
   printf("Invalid");

}