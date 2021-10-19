#include <stdio.h>
// Pavan Kumar J 2021CCS0094
int main()
{
    char choice;
    printf("enter the choice of student:");
    scanf(" %c",&choice);
    if(choice=='p' || 'P')
        printf("PHYSICS CYCLE");
    else
        printf("CHEMISTRY CYCLE");
}