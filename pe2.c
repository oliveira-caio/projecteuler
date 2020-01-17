#include <stdio.h>

//achar a soma de todos os números pares da sequência
//de fibonacci menores que 4 milhões

int main () {

  int i, n1 = 1, n2 = 2, aux = 0;
  long long int aux2 = 2;

  for (i = 0; aux < 4000000; i++) {
    aux = n1 + n2;
    n1 = n2;
    n2 = aux;
    i++;
    if (aux % 2 == 0) {
      aux2 = aux2 + aux;
    }
  }

  printf("%lld\n", aux2);

  return 0;
}
