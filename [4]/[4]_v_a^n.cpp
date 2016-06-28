// 4. Определите два целых числа a и N. Напишите программу, которая вычисляет a^N (а в степени N). Выведите результат на экран.

#include <cstdio>

int main(int argc, char** argv) {
  
  int a;
  int a_original;
  int N;

  printf("\nBase (a): ");
  scanf("%i", &a);
  printf("Power (N): "); 
  scanf("%i", &N);
  
  a_original = a;
  
  for (int i = 1; i < N; ++i) {
    a *= a_original;
  }

  printf("\na^N = %i\n\n", a);
  return 0;
}
