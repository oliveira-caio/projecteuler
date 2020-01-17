#include <stdio.h>

long long int collatz(long long int n) {

  int i = 0;

  while (n != 1) {
    if ((n % 2) == 0) {
      n = n/2;
    } else {
      n = 3*n + 1;
    }
    i++;
  }

  return i;
}

int main() {

  long long int j, aux = 0, aux3 = 0, aux4;

  for (j = 1; j <= 1000000; j++) {
    aux = collatz(j);
    if (aux > aux3) {
      aux3 = aux;
      aux4 = j;
    }
  }

  printf("%lld\n", aux4);

  return 0;
}
