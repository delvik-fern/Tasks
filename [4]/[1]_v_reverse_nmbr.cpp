// 1. Дано четырехзначное число (к примеру 5678). Вывести на экран в обратном порядке цифры, из которых это число состоит.

#include <cstdio>

int main(int argc, char** argv) {
  
  int* k = new int();
  printf("Enter a number: ");
  scanf("%i", k);
  int i = 1;

  
  int* k_original = new int();
  *k_original = *k;

  while ((*k /= 10) != 0)
    ++i;
//      printf("%i\t%i\n", k, i);
 
  *k = *k_original;
  int* arr = new int[i];

  printf("The reverse number is: ");

  for (int j = 0; j < i; ++j) {
    printf("%i", arr[j] = *k % 10);
    *k /= 10;
  }

  printf("\n");

return 0;
}
