#include<stdio.h>
// Pavan Kumar J 20201CCS0094
int main()
{
    float CGPA;
    printf("enter the value of CGPA:");
    scanf("%f",&CGPA);
    if(CGPA>=9)
        printf("grade is O that is outstanding");
    else if(7<=CGPA<9)
        printf("grade is E that is excellent");
    else if(5<=CGPA<7)
        printf("grade is G that is good");
    else if(4<=CGPA<5)
        printf("grade is P that is pass");
    else if(CGPA<4)
        printf("student has failed");
    else
    printf("invalid CGPA");
}