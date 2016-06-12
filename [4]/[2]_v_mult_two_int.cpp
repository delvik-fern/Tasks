// 2. Вывести на экран таблицу умножения чисел A * B, где A и B пробегают значения от 1 до 9.

#include <cstdio>

int main(int argc, char** argv) {

  int i = 0;
  int j = 0;
  int res;

  for (i; i<= 9; ++i) {

    while (j <= 9) {
      printf("%i x %i", i, j);
      res = i * j;
      ++j;
      printf(" = %i\n", res);
    }

  j = 0;
  printf("\n");
  }

return 0;  

}
