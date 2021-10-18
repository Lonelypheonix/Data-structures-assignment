#include<stdio.h>
// Pavan Kumar J 20201CCS0094
typedef int AGE;
typedef char NAME[10];
typedef char ID[13];
typedef int CA1;
typedef int CA2;
typedef int CA3;
struct marks
{
        CA1 quiz_marks;
        CA2 assignment_marks; 
        CA3 test1_marks;
};
  
typedef struct marks MARKS;

struct student
{
        AGE my_age;
        NAME my_name;
        ID my_id;
        MARKS m;  
};

typedef struct student STUDENT;

int main()
{
       STUDENT st;
        printf("Enter the age\n");
        scanf("%d",&st.my_age);
        printf("Enter the name \n");
        scanf("%s",st.my_name);
        printf("Enter the Id of the student \n");
        scanf("%s",st.my_id);
        printf("Enter quiz marks of the student \n");
        scanf("%d",&st.m.quiz_marks);
        printf("Enter assignment marks of the student \n");
        scanf("%d",&st.m.assignment_marks);
        printf("Enter test one marks of the student \n");
        scanf("%d",&st.m.test1_marks);
        printf("Name of student is %s\n",st.my_name);
        printf("Age of student is %d\n",st.my_age);
        printf("ID of student is %s\n",st.my_id);
        printf("quiz marks of student is %d\n", st.m.quiz_marks);
        printf("assignment marks of student is %d\n", st.m.assignment_marks);
        printf("test one marks of student is %d\n", st.m.test1_marks);
}