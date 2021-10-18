#include<stdio.h>
// Pavan Kumar J 20201CCS0094
struct cinfo
{
        int age;
        float height;
        float weight;
};
int main()
{
       struct cinfo p1, p2, p3, p4;
     printf(" Enter the age, height and weight value of first client \n");
      scanf("%d%f%f",&p1.age, &p1.height, &p1.weight); 
      printf(" Enter the age, height and weight value of second client \n");
      scanf("%d%f%f",&p2.age,  &p2.height, &p2.weight); 
     printf(" Enter the age, height and weight value of third client \n");
     scanf("%d%f%f",&p3.age,  &p3.height, &p3.weight); 
     if (p1.age == p2.age)
    printf("Age of first and second client is same\n");
   if(p2.age == p3.age)
   printf("Age of second and third client is same\n"); 
        
     if(p1.age == p3.age)
          printf("Age of first and third client is same\n");
       p4.age = p1.age + p2.age + p3.age;
       p4.height = p1.height + p2.height + p3.height;
       p4.weight = p1.weight + p2.weight + p3.weight;
       printf("Average age of three clients is %d\n", p4.age/3);
       printf("Average height of three clients is %f\n", p4.height/3);
       printf("Average weight of three clients is %f\n", p4.weight/3);
}