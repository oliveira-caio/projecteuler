#include <stdio.h>

//achar o maior número palindrômico múltiplo
//de dois números de 3 algarismos

int main () {


  int i, j, x, y, v[7], aux = 0, aux2 = 0, aux3 = 0, aux4 = 0;

  for (i = 999, j = 999; j >= 100; j--, aux2 = 0) {
    aux = i*j;
    v[0] = (aux/100000);
    v[1] = (aux/10000) - (v[0]*10);
    v[2] = (aux/1000) - (v[0]*100 + v[1]*10);
    v[3] = (aux/100) - (v[0]*1000 + v[1]*100 + v[2]*10);
    v[4] = (aux/10) - (v[0]*10000 + v[1]*1000 + v[2]*100 + v[3]*10);
    v[5] = (aux/1) - (v[0]*100000 + v[1]*10000 + v[2]*1000 + v[3]*100 + v[4]*10);
    for (x = 0, y = 5; x < 3; x++, y--) {
      if (v[x] != v[y]) {
	aux3 = 0;
      } else {
	aux2++;
	if (aux2 == 3) {
	  aux3 = 1;
	}
      }
    }
    if (aux3 == 1) {
      if (aux4 < aux) {
	aux4 = aux;
      }
    }
    if (j == 100) {
      i = i-1;
      j = i;
    }
  }

  printf("%d\n", aux4);

  return 0;
}
