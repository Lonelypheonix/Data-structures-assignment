// Pavan Kumar J 20201CCS0094

#include<stdio.h>
void read(int arr[],int n)
{
int i;
printf("Ente %d items into the array\n",n);
for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
}
void display(int arr[],int n)
{
int i;
printf("The content of array is\n");
for(i=0;i<n;i++)
printf("%d element is %d\n",i,arr[i]);
}
void update(int arr[],int n)
{  
  int i; 
  for(i=0;i<n;i++)
   {
     arr[i]= arr[i]*2;
   }
    printf("The new array is \n");
    for(i=0;i<n;i++)
    printf("%d element is %d\n",i,arr[i]);
}

void main()
{
int arr[50],number;
printf("enter how many number to read\n");
scanf("%d",&number);
read(arr,number);
display(arr,number);
update(arr, number);
}