/* 3. Вывести на экран равнобедренный треугольник высотой N == 5 (N можно будет изменять), состоящий из символов '*':

     *
    ***
   *****
  *******
 *********
*/ 


#include <cstdio>

int main(int argc, char** argv) {

  int N;  

  printf("Enter height: ");
  scanf("%i", &N);


  for (int current_line = 1; current_line <= N; ++current_line) {
    
    for (int n_of_spaces = 0; n_of_spaces <= (N - current_line); ++n_of_spaces) {
      printf(" "); 
    }

      for (int n_of_stars = 0; n_of_stars < 2 * current_line - 1; ++n_of_stars) {
        printf("*");
      }

    printf("\n");
  }

  return 0;
}
