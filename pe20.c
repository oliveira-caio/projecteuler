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

  int i, v[158], sum = 0, aux2;
  long double n = 1;
  FILE *arq;
  arq = fopen("ex20.txt", "r");

  for (i = 0; i < 158; i++) {
    fscanf(arq, "%d", &v[i]);
    sum = sum + v[i];
  }

  //fatorial dando errado
  for (i = 100; i > 0; i--) {
    n = n*i;
  }

  aux2 = verificadigito(n);

  printf("%d\n", sum);

  return 0;
}
