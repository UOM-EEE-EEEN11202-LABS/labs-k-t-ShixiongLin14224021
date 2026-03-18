#define N 10

int main(void) {

  double my_1d_array[N] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
  my_1d_array[5] = 27.223;

#define M 3 // goes at top with other defines

  double my_2d_array[N][M] = {[0][0] = 3.3, [1][0] = 1.1, [9][2] = 77.0};
  my_2d_array[4][1] =
      (my_2d_array[1][0] * my_2d_array[9][2]) + my_2d_array[9][1];

  // goes in main

  return 0;
}
