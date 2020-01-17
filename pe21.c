#include <stdio.h>
#include <stdlib.h>

int *achadivisores(int n) {

  int i, *div, j = 0;

  div = (int *)malloc(100*sizeof(int));

  for (i = 0; i < 100; i++) {
    div[i] = 0;
  }

  for (i = 1, j = 0; i < n; i++) {
    if (n % i == 0) {
      div[j] = i;
      j++;
    }
  }

  return (div);
}


int main () {

  int n1, n2 = 0, n3 = 0, *v1, *v2, i, j, k, aux1 = 0;

  v1 = (int *)malloc(100*sizeof(int));
  v2 = (int *)malloc(100*sizeof(int));

  for (i = 0; i < 100; i++) {
    v1[i] = 0;
    v2[i] = 0;
  }

  for (n1 = 1; n1 < 10000; n1++) {
    v1 = achadivisores(n1);
    for (j = 0, n2 = 0; j < 100; j++) {
      n2 = n2 + v1[j];
    }
    v2 = achadivisores(n2);
    for (k = 0, n3 = 0; k < 100; k++) {
      n3 = n3 + v2[k];
    }
    if ((n3 == n1) && (n2 != n1)) {
      aux1 = aux1 + n3 + n1;
    }
  }

  printf("\n\n%d\n", aux1/2);

  free(v1);
  free(v2);
  return 0;
}
