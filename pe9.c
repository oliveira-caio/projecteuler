#include <stdio.h>

int main () {

  int a, b, c, aux = 0;

  for (a = 3; a < 400; a++) {
    for (b = 4; b < 500; b++) {
      for (c = 5; c < 1000; c++) {
	if (a*a + b*b == c*c) {
	  if (a + b + c == 1000) {
	    aux = a*b*c;
	  }
	}
      }
    }
  }

  printf("%d\n", aux);

  return 0;
}
