#include<stdio.h>
// Pavan Kumar J 20201CCS0094
#include<string.h>
typedef char NAME[15];
typedef int ID;

struct employee  
{     
      ID emp_id;  
      NAME emp_name;  
      struct Date  
      {  
           int dd;  
           int mm;  
           int yyyy;   
      }doj;  
};  
typedef struct employee EMPLOYEE;

int main( )  
{  
        EMPLOYEE e;
        e.emp_id=101;  
        strcpy(e.emp_name, "Mr. Arjun");
        e.doj.dd=12;  
        e.doj.mm=07;  
        e.doj.yyyy=2020;  
        printf( "employee id : %d\n", e.emp_id);  
        printf( "employee name : %s\n", e.emp_name);  
        printf( "employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e.doj.dd, e.doj.mm,
                  e.doj.yyyy);  
       return 0;  
}