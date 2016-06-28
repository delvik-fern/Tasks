// 5. Определите два массива целых чисел X и Y длиной N == 5 (N можно будет изменять). Вычислите скалярное произведение X * Y, а также вектор Z, элементами которого являются суммы соответствующих координат векторов X и Y. Выведите значение Z на экран в виде строки: Z = (z1, z2, z3, z4, z5)

#include <stdio.h>

int solve(int* x, int* y, int size);

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

  int res = solve(x, y, size);
  printf("Scalar = %i\n", res);

  delete [] x;
  delete [] y;
  return 0;
}

int solve(int* x, int* y, int size) {
  
  int scalar = 0;
  int* z = new int[size];
  printf("z = ( ");

  for (int i = 0; i < size; ++i) {
    z[i] = x[i] * y[i];
    scalar += z[i];
    printf("%i ", z[i]);
  }

  printf(")\n");
  delete [] z;
  return scalar;
}
