// Pavan Kumar J 20201CCS0094

#include<stdio.h> 
void read(int a[],int size)
{
int i;
printf("Ente %d items into the array\n",size);
for(i=0;i<size;i++)
 scanf("%d",&a[i]);
}
void display(int a[],int size)
{
int i;
printf("The content of array is\n");
for(i=0;i<size;i++)
printf("%d element is %d\n",i,a[i]);
}
void main()
{
int a[50],number;
printf("enter how many number to read\n");
scanf("%d",&number);
read(a,number);
display(a,number);
}