// 1. Дано четырехзначное число (к примеру 5678). Вывести на экран в обратном порядке цифры, из которых это число состоит.

#include <cstdio>

int main(int argc, char** argv) {
  
  int Number;
  printf("Enter a number: ");
  scanf("%i", &Number);

  int number_original = Number;
  int length = 0;

  while (Number != 0) {
    Number /= 10;
    ++length;
  }

  Number = number_original;
  int reverse_number = 0;

  while (length != 0) {
    int c = Number % 10;

    for (int j = 1; j != length; ++j) {
      c *= 10;
    }

    reverse_number += c;    
    Number /= 10;
    --length;
  } 

  printf("The reverse number is: %i\n", reverse_number);

  return 0;
}


/*
  while (k != 0) {
    ++i;
    printf("k = %i\t", k);
    printf("k_ost = %i\t", k % 10);
    printf("i = %i\n", i);
    k /= 10;
  }
  printf("k = %i\n", k);
*/

