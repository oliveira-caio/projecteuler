#include <stdio.h>

//achar o menor número múltiplo dos 20 primeiros números naturais

long long int verifica(long long int n) {

  int i, aux = 0;

  for (i = 20; i >= 1; i--) {
    if ((n % i) == 0) {
      aux++;
      if (aux == 20) {
	return n;
      }
    } else {
      return 0;
    }
  }
}


int main () {

  long long int i = 0, n = 1;
  int j = 1;

  while (j == 1) {
    i = verifica(n);
    n++;
    if (i != 0) {
      break;
    }
  }

  printf("%lld\n", i);

  return 0;
}
