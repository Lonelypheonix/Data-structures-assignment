#include <stdio.h>
// Pavan Kumar J 20201CCS0094
void main()
{
  int year, age;

  printf("Input the year of birth of the candidate : ");
  scanf("%d",&year);
  age=2021-year;
  if ( age>=18)
     {
       printf("Congratulation! You are eligible for casting your vote.\n");
       
       
     }
  else
     printf("Sorry, You are not eligible to caste your vote.\n");
}
