#include <stdio.h>

int main() {

  long long int i, j, aux, m[100][100];
  FILE *arq = fopen("pe67.txt", "r");

  for (i = 0; i < 100; i++) {
    for (j = 0; j < 100; j++) {
      fscanf(arq, "%lld", &m[i][j]);
    }
  }

  aux = 100;
  for (i = 98; i > -1; i--) {
    for (j = 0; j < aux; j++) {
      if (m[i+1][j] > m[i+1][j+1]) {
	m[i][j] = m[i][j] + m[i+1][j];
      } else {
	m[i][j] = m[i][j] + m[i+1][j+1];
      }
    }
    aux--;
  }

  printf("%lld\n", m[0][0]);

  fclose(arq);
  return 0;
}
