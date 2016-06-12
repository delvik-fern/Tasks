#include <cstdio>
#include <cmath>



 int main(int argc, char** argv) {

 int solve(int* x, int*y, int size);

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


    int res = solve(x, y, size);
    printf("Distance = %i\n", res);

 
delete [] x;
delete [] y;

return 0;
}

int solve(int* x, int* y, int size) 
 {
  
    int* result = new int();
    int* z = new int(0);
    printf("z = ( ");
      for (int i = 0; i < size; ++i) {
        *z += ((x[i] - y[i]) * (x[i] - y[i]));
      }

    *result = sqrt(*z);
     
    printf(")\n");
 return *result;
 }
