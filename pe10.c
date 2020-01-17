#include <stdio.h>

long long int verificaprimo(long long int n) {

  int i, aux = 0;

  for (i = 3; i <= n; i = i+2) {
    if ((n % 2) == 0) {
      return 0;
    } else {
      if ((n % i) == 0) {
	aux++;
	if ((aux == 1) && (i == n)) {
	  return n;
	} else {
	  return 0;
	}
      }
    }
  }
  return 0;
}

int main () {

  long long int n = 3, aux = 2, resultado;

  do {
    resultado = verificaprimo(n);
    if (resultado != 0) {
      aux = aux + n;
      n++;
    } else {
      n++;
    }
  } while (n < 2000);

  printf("%lld\n", aux);

  return 0;
}
