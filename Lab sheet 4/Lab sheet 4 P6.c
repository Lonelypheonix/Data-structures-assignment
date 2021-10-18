#include<stdio.h>
// Pavan Kumar J 20201CCS0094
int *abc();  
int main()
{
    int *ptr;
    ptr = abc();
  printf("%d", *ptr);
    return 0;
}
int *abc()
{
    int x = 100, *p;
    p = &x;
    return p;
}
