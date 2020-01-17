#include <stdio.h>
#include <stdlib.h>

int main() {

  int i, j, n;
  long long int **m;

  printf("Informe o valor de n: ");
  scanf("%d", &n);

  m = (long long int **)malloc((n+1)*sizeof(long long int));
  for (i = 0; i < n+1; i++) {
    (m)[i] = (long long int *)malloc((n+1)*sizeof(long long int));
  }

  for (i = 0; i < n+1; i++) {
    m[i][n] = 1;
    m[n][i] = 1;
  }

  for (i = n-1; i >= 0; i--) {
    for (j = n-1; j >= 0; j--) {
      m[i][j] = m[i+1][j] + m[i][j+1];
    }
  }

  printf("%lld\n", m[0][0]);

  return 0;
}
