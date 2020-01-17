#include <stdio.h>

int main() {

  int i, j, m[15][15], aux;
  FILE *arq = fopen("pe18.txt", "r");

  for (i = 0; i < 15; i++) {
    for (j = 0; j < 15; j++) {
      fscanf(arq, "%d", &m[i][j]);
    }
  }

  aux = 14;
  for (i = 13; i > -1; i--) {
    for (j = 0; j < aux; j++) {
      if (m[i+1][j] > m[i+1][j+1]) {
	m[i][j] = m[i][j] + m[i+1][j];
      } else {
	m[i][j] = m[i][j] + m[i+1][j+1];
      }
    }
    aux--;
  }

  printf("%d\n", m[0][0]);

  fclose(arq);
  return 0;
}
