#include <stdio.h>

//achar o maior primo que divide n

int main () {

  int i, aux = 0;
  long long int n = 600851475143;

  for (i = 3; i <= n; i = i+2) {
    if ((n % i) == 0) {
      n = n/i;
      aux = i;
    }
  }


  printf("%d\n", aux);

  return 0;
}
