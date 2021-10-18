#include<stdio.h>
// Pavan Kumar J 20201CCS0094
struct size
{
  int x;
            double y;
  char name[10];
};
int main()
{
  struct size e;
  printf("size of structure is %d bytes", sizeof(e));
  return 0;
}