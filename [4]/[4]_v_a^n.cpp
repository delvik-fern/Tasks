// 4. Определите два целых числа a и N. Напишите программу, которая вычисляет a^N (а в степени N). Выведите результат на экран.

#include <cstdio>

int main(int argc, char** argv) {
  
  int* a = new int();
  int* a_orig = new int ();
  int* N = new int();

  printf("\nBase (a): ");
  scanf("%i", a);
  printf("Power (N): "); 
  scanf("%i", N);
  
  *a_orig = *a;
  
  for (int i = 1; i < *N; ++i)
    *a *= *a_orig;

  printf("\na^N = %i\n", *a);
  
  
}
