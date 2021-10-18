#include <stdio.h>
// Pavan Kumar J 20201CCS0094
struct cinfo 
{
    int age;
    float height;
    float weight;
};
int main()
{ 
   struct cinfo p; 
   printf(" Enter the age, height and weight value of clients \n");
   scanf("%d",&p.age); 
   scanf("%f",&p.height); 
   scanf("%f",&p.weight); 
   printf("The age of the client is %d\n", p.age); 
   printf("The height of the client is %f\n", p.height); 
   printf("The weight of the client is %f\n", p.weight); 
}
