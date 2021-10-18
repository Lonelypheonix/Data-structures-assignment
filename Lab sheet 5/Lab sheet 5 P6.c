#include <stdio.h>
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
   STUDENT st; 
   printf("Enter the age\n"); 
   scanf("%d",&st.my_age); 
   printf("Enter the CGPA\n"); 
   scanf("%f",&st.my_cgpa); 
   printf("Enter the name \n"); 
   scanf("%s",st.my_name); 
   printf("Enter the Id of the student \n"); 
   scanf("%s",st.my_id); 
   printf("Enter the department of the student \n"); 
   scanf("%s",st.my_dept); 
   printf("Name of student is %s\n",st.my_name); 
   printf("Age of student is %d\n",st.my_age); 
   printf("CGPA of student is %f\n",st.my_cgpa); 
   printf("ID of student is %s\n",st.my_id); 
   printf("Department of student is %s\n",st.my_dept); 
}