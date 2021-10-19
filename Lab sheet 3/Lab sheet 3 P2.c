#include<stdio.h>
// Pavan Kumar J 20201CCS0094
void odd();
void even();
int n=1;
void main()
{
  odd();
}
void odd()
{
  if(n<=10)                                              
    {
        printf("%d\t",n+1);                        
        n++;                                                
        even();
     }  
}
void even()
{
     if(n<=10)                                    
       {
        printf("%d\t",n-1);               
        n++;                                        
        odd();
     }
  
}