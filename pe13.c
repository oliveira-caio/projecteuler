#include <stdio.h>

int main() {

  long double sum[100], s = 0;
  int i = 0;
  FILE *arq;

  arq = fopen("pe13.txt", "r");

  for (i = 0; i < 100; i++) {
    sum[i] = 0;
  }

  for (i = 0; i < 100; i++) {
    fscanf(arq, "%Lf", &sum[i]);
  }

  for (i = 0; i < 100; i++) {
    s = s + sum[i];
  }

  printf("%.0Lf\n", s);

  fclose(arq);
  return 0;
}
