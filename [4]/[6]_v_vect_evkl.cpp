#include <cstdio>
#include <cmath>

double solve(int* x, int*y, int size);

int main(int argc, char** argv) {

  int size;
  printf("Enter vector length: ");
  scanf("%i", &size);  
    						
  printf("Enter X vector: ");			
  int* x = new int[size];
  for (int i = 0; i < size; ++i) {
    scanf("%i", &x[i]);    
  }


  printf("Enter Y vector: ");
  int* y = new int[size];
  for (int i = 0; i < size; ++i) {
    scanf("%i", &y[i]);
  }


  double res = solve(x, y, size);
  printf("Distance = %f\n", res);

 
  delete [] x;
  delete [] y;

  return 0;
}

double solve(int* x, int* y, int size) {
  
  double result;
  int z;
  printf("z = ( ");

  for (int i = 0; i < size; ++i) {
    z += ((x[i] - y[i]) * (x[i] - y[i]));
    printf("%i ", z);
  }

  result = sqrt(z);
  printf(")\n");

  return result;
 }
