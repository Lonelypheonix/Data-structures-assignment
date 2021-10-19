// Pavan Kumar J 20201CCS0094

#include <stdio.h> 
void read(int arr[]) 
{ 
  printf("Enter the elements of array \n");
  for(int i=0;i<10;i++) 
  scanf("%d", &arr[i]); 
} 
void display(int arr[]) 
{ 
  printf("The elements of the array are \n");
  for(int i=0; i<10;i++) 
  printf("%d ", arr[i]); 
  } 
  int sum(int arr[]) 
  { 
    int sum=0; 
    for(int i=0; i<10;i++) 
    sum+= arr[i]; 
    return sum; 
    } 
    int main() 
    { 
      int price[10]; 
      read(price); 
      display(price); 
      printf("\nSum = %d", sum(price)); 
      return 0;
     }