#include <stdio.h>
// Pavan Kumar J 20201CCS0094
struct student 
{ 
    char name[20]; 
     int roll; 
     float marks;
 }; 
int main() 
{ 
struct student s1={"PU", 4,100}; 
printf("Name=%s", s1.name); 
printf("\n Roll=%d", s1.roll); 
printf("\n Marks=%f", s1.marks); 
}