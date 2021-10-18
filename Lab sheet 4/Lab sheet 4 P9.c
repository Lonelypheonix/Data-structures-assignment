#include<stdio.h>
// Pavan Kumar J 20201CCS0094
void add (int a, int b)
{
    printf("Summation is %d\n", a+b);
}

void sub (int a, int b)
{
     printf("difference is %d\n", a-b);
}

void mul (int a, int b)
{
     printf("Multiplication is %d\n", a*b);
}

void div (int a, int b)
{
     printf("Division is %d\n", a/b);
}

void reminder (int a, int b)
{
     printf("Reminder is %d\n", a%b);
}

int main()
{ 
   void (*fun_ptr[])(int, int) = {add, sub, mul, div, reminder};
   int a, b, ch;
   printf("Enter two integers"); 
   scanf("%d%d",&a, &b);
   printf("Enter choice 0 for Addition\n, 1 for Subtraction\n, 2 for Multiplication\n, 3 for Division\n, 4 for Reminder\n");
   scanf("%d", &ch); 
   if (ch < 0 && ch >3)
   return 0;
     (*fun_ptr[ch])(a,b); 
   return 0;
}