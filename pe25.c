#include <stdio.h>

int verificadigito(long double valor) {

  int aux = 0;

  while (valor > 1) {
    valor = valor/10;
    aux++;
  }

  return aux;
}

int main () {

  long double a = 1, b = 0, c = 0, aux = 0;
  int i;

  for (i = 1;; i++) {
    c = a + b;
    aux = verificadigito(c);
    if (aux > 999) {
      printf("%d\n", i);
      break;
    }
    a = b;
    b = c;
  }

  return 0;
}
