#include <stdio.h>
#include <math.h>

int verificadigito(long double valor) {

  int aux = 0;

  while (valor > 1) {
    valor = valor/10;
    aux++;
  }

  return aux;
}

int main () {

  FILE *arq;
  int dig = 0, v[302], i = 0, aux = 0;
  long double valor = 0;

  arq = fopen("ex16.txt", "r");
  for (i = 0; i < 302; i++) {
    fscanf(arq, "%d", &v[i]);
  }

  for (i = 0; i < 302; i++) {
    aux = v[i] + aux;
  }


  valor = pow(2,1000);
  dig = verificadigito(valor);

  printf("%d\n", aux);

  return 0;
}
