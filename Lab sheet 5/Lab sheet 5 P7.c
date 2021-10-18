#include<stdio.h>
// Pavan Kumar J 20201CCS0094
typedef int AGE;
typedef char NAME[10];
typedef float CGPA;
typedef char ID[13];
typedef char DEPT[4];

struct student
{
  AGE my_age;   
  NAME my_name;
  CGPA my_cgpa;
  ID my_id;
  DEPT my_dept;
};
typedef struct student STUDENT;

void main()
{
   STUDENT st[60];   
     int n, i;
     printf ("Enter How many student\n");
     scanf ("%d", &n);
     for (i=1; i<=n; i++)
      {
       printf("Enter the age of %d student\n", i);
       scanf("%d", &st[i].my_age); 
       printf("Enter the CGPA of %d student\n", i);
       scanf("%f",&st[i].my_cgpa);
       printf("Enter the name of %d student \n", i);
       scanf("%s", &st[i].my_name);
       printf("Enter the Id of the %d student \n", i);
       scanf("%s", st[i].my_id);
       printf("Enter the Department of the %d student \n", i);
       scanf("%s", &st[i].my_dept);
       }
         for (i=1; i<=n; i++)
          {
            printf("%d student Name is %s\n", i, st[i].my_name);
            printf("%d student Age is %d\n",i, st[i].my_age);
            printf("%d student CGPA is %f\n",i, st[i].my_cgpa);
            printf("%d student ID is %s\n",i, st[i].my_id);
            printf("%d student department is %s\n",i, st[i].my_dept);
          }
}