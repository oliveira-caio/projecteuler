#include <stdio.h>

int main () {

  FILE *arq;
  long long int v[1000], i, j, k, resultado[987];

  arq = fopen("whatever.txt", "r");

  for (k = 0; k < 987; k++) {
    resultado[k] = 1;
  }
  
  for (i = 0; i < 1000; i++) {
    fscanf(arq, "%lld", &v[i]);
  }
  
  k = 0;
  for (i = 0; i < 987; i++, k++) {
    for (j = i; j < (i+13); j++) {
      resultado[k] = v[j]*resultado[k];
    }
    if (k != 0) {
      if (resultado[k] < resultado[k-1]) {
	resultado[k] = resultado[k-1];
      }
    }
  }
  
  printf("%lld\n", resultado[986]);
  fclose(arq);
  return 0;
}
