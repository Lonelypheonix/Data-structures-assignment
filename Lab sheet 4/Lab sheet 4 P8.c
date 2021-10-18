#include <stdio.h>
// Pavan Kumar J 20201CCS0094
#define MAX 5
 
int main () 
{

   int  var[] = {10, 100, 200,25,68};
   int i, *ptr[MAX];
 
   for ( i = 0; i < MAX; i++) 
  {
      ptr[i] = &var[i]; 
  }
   
   for ( i = 0; i < MAX; i++) 
   {
      printf("Value of var[%d] = %d\n", i,*ptr[i] );
    }   
   return 0;
}