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
int update(int arr[], int position, int value)
{  
  int i, n; 
  for(i=0;i==position;i++)
   {
     arr[i]= value;
   }
    printf("The updated value in %d position is %d\n",position,value);
    for(i=0;i<n;i++)
    printf("%d element is %d\n",i,arr[i]);
}

void main()
{
int arr[50],number, uvalue,pos, value;
printf("enter how many number to read\n");
scanf("%d",&number);
read(arr,number);
display(arr,number);
printf("Enter the position and the value to be updated\n");
scanf("%d%d",&pos,&value);
uvalue= update(arr,pos,value);
}