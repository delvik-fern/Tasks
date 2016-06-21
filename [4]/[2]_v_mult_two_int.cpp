// 2. Вывести на экран таблицу умножения чисел A * B, где A и B пробегают значения от 1 до 9.

#include <cstdio>

int main(int argc, char** argv) {

  for (int i =0, j = 0; i <= 9; ++i, j = 0) {

    while (j <= 9) {
      int res = i * j;
      printf("%i x %i = %i\n", i, j, res);
      ++j;
    }

    printf("\n");
  }

  return 0;
}
