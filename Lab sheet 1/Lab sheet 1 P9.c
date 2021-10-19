#include<stdio.h> 
// Pavan Kumar J 20201CCS0094
void main()
{
int rank, percentage; 
printf("Enter the rank: "); 
scanf("%d",&rank); 
printf("Enter the percentage: "); 
scanf("%d",&percentage);
if ( rank < 15000 )
{
if ( percentage >= 75 )
{
printf("Eligible to Contest for CR");
}
else
{
printf("Not Eligible to Contest because of percentage");
}
}
else
{
printf("Not Eligible to Contest because of rank");
}
}