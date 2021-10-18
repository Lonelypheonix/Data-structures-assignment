#include <stdio.h>
// Pavan Kumar J 20201CCS0094
void fun(int a)
{
  printf("value of a is %d\n", a);  
}
int main()
{
  void (*ftr)(int) = &fun;
  (*ftr)(10);
  return 0;
}