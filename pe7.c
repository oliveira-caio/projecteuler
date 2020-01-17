#include <stdio.h>

int verificaprimo(long long int n) {

  int i, aux = 0;

  for (i = 1; i <= n; i++) {
    if ((n % i) == 0) {
      aux++;
      if ((aux == 2) && (i != n)) {
	return 0;
      } else {
	if ((aux == 2) && (i == n)) {
	return 1;
	}
      }
    }
  }
}

int main () {

  long long int n = 2;
  int resultado, aux = 0;

  do {
    resultado = verificaprimo(n);
    if (resultado == 1) {
      aux++;
      n++;
    } else {
      n++;
    }
  } while (aux < 30001);

  printf("%lld\n", n-1);

  return 0;
}
