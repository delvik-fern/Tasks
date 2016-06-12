/* 3. Вывести на экран равнобедренный треугольник высотой N == 5 (N можно будет изменять), состоящий из символов '*':

     *
    ***
   *****
  *******
 *********
*/ 


#include <cstdio>

int main(int argc, char** argv) {

  int* N = new int();  

  printf("Enter hight: ");
  scanf("%i", N);


  for (int curr_ln = 1; curr_ln <= *N; ++curr_ln) {
    
    for (int numb_spcs = 0; numb_spcs <= (*N - curr_ln); ++numb_spcs)
      printf(" "); 
    
      for (int numb_strs = 0; numb_strs < 2 * curr_ln - 1; ++numb_strs)
        printf("*");

    printf("\n");
  }

return 0;
}
