#include <stdio.h>

//achar a soma de todos os números múltiplos de 3 e de 5 menores do que 1000

int main () {

  int i, n = 0, aux;

  for (i = 0; i < 1000; i++) {
    if (i % 3 == 0) {
      n = n + i;
      aux = 1;
    }
    if ((i % 5 == 0) && (aux == 0)) {
      n = n + i;
    }
    aux = 0;
  }

  printf("%d\n", n);

  return 0;
}
