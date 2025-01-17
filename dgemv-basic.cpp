const char* dgemv_desc = "Basic implementation of matrix-vector multiply.";
#include <iostream>

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */
void my_dgemv(int n, double* A, double* x, double* y) { 
   for (int i = 0; i < n; i++){ // row
      int offSet = i * n; 
      double sum = 0.0;
      for (int j = 0; j < n; j++){ // column
         sum += A[offSet+ j] * x[j];
      }
      y[i] += sum;
   }
}


