#include <stdio.h>
#include <math.h> 
// Pavan Kumar J 20201CCS0094
void fun(int n, int* square, double* sq_root) 
{ 
    *square = n * n; 
    *sq_root = sqrt(n); 
}  
int main() 
{ 
    int n = 100; 
    int sq; 
    double sq_root; 
    fun(n, &sq, &sq_root); 
    printf("%d %f\n", sq, sq_root); 
    return 0; 
}