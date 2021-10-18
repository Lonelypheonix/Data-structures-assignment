#include <stdio.h>
// Pavan Kumar J 20201CCS0094
void main()
{
 int *paddress,p;
 p=2;
 paddress=&p;
 printf("The value of p is %d\n",p);
 printf("The value of p is %d\n",*paddress);
 printf("The address of pis %d\n",&p);
 printf("The address of pis %d\n",paddress);
}
