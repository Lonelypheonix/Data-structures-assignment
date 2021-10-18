#include<stdio.h> 
// Pavan Kumar J 20201CCS0094

typedef int AGE; 
typedef float HEIGHT; 
typedef char NAME[10]; 
int main() 
{ 
  AGE my_age;  
  HEIGHT my_height; 
  NAME my_name;  
  printf("Enter the age\n"); 
  scanf("%d",&my_age); 
  printf("Enter the height\n"); 
  scanf("%f",&my_height); 
  printf("Enter the name \n"); 
  scanf("%s",my_name); 
  printf("The age of %s is %d and height is %f\n",my_name, my_age, my_height); 
}