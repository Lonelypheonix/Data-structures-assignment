#include<stdio.h>
// Pavan Kumar J 20201CCS0094 
int main()
{
 int v[5] = {10, 100, 200,300,400};
 int *ptr;
 ptr = v;
 for (int i = 0; i < 5; i++)
 {
 printf("Value of *ptr = %d\n", *ptr);
 printf("Value of ptr = %p\n\n", ptr);
 ptr++;
 }
}