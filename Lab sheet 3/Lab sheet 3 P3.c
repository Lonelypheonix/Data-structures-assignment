#include<stdio.h>
// Pavan Kumar J 20201CCS0094
void transfer(int n, char from, char to, char temp)
{ 
  if(n>0)
   { 
    transfer(n-1,from,temp,to);           
    printf("move  disk %d from %c to %c pole\n",n,from,to);           
    transfer(n-1,temp,to,from);
    }
  return;
}
void main()
{
   int n;
   printf("how many disks \n");
   scanf("%d",&n);
   transfer(n,'L','R','C'); 
 return; 
}