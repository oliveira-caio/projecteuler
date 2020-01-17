#include <stdio.h>
#include <math.h>

int main () {

  long long int i, j, k, l, aux = 0;
  long double c[9801];

  k = 0;
  for (i = 2; i < 101; i++) {
    for (j = 2; j < 101; j++) {
      c[k] = pow(i, j);
      aux++;
      for (l = 0; l < k; l++) {
	if (c[k] == c[l]) {
	  aux--;
	  break;
	}
      }
      k++;
    }
  }

  printf("%lld\n", aux);

  return 0;
}
