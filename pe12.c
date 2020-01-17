#include <stdio.h>

long long int verificadivisores(long long int n) {

  long long int i, aux = 0;
  
  for (i = 1; i <= n; i++) {
    if ((n % i) == 0) {
      aux++;
      printf("%lld %lld\n", i, aux);
    }
  }
  
  return aux;
}

long long int contatriangulo(long long int n) {
  
  long long int aux = 0;
  
  aux = verificadivisores((n*n+n)/2);
  if (aux >= 500) {
    return 1;
  }

  return 0;
}

int main() {

  long long int n, aux = 0;

  n = 1;
  while (n != -1) {
    aux = contatriangulo(n);
    if (aux == 1) {
      break;
    } else {
      n++;
    }
  }

  printf("%lld\n", n);

  return 0;
}
