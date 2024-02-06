// NIM - NAMA


#include <stdio.h>

int main(int argc, char **argv)
{
  int max, min, n ;

  scanf("%d\n", &n);
  int angka[n];
  min = 0;
  max = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &angka[i]);
    if (angka[i] > max) {
      max = angka[i];
    }
    if (angka[i] < min) {
      min = angka[i];
    }
  }

  printf("%d\n", min);
  printf("%d\n", max);

  return 0;
}
