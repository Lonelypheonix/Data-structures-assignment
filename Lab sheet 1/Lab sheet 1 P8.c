#include <stdio.h>

// Pavan Kumar J 20201CCS0094

int main()
{
  int rank; 
  float per; 
  printf("Enter the percentage and rank \n");
  scanf("%f%d",&per,&rank);
  if(per>=75 || rank<=15000)
     printf(" eligible to become CR\n");
  else
        printf("Not eligible to become CR\n");
  return 0;
}