#include <stdio.h>

//achar a diferença entre o quadrado da soma
//de todos os números de 1 até 100 e a soma
//de cada número de 1 até 100 ao quadrado

int somadosquadrados(int n) {

  int i, aux = 0;

  for (i = 1; i <= n; i++) {
    aux = i*i + aux;
  }

  return aux;
}

int quadradodasomas(int n) {

  int i,  aux = 0;
  
  for (i = 1; i <= n; i++) {
    aux = aux + i;
  }

  aux = aux*aux;

  return aux;
}

int main () {

  int resultado, n = 100;

  resultado = quadradodasomas(n) - somadosquadrados(n);

  printf("%d\n", resultado);

  return 0;
}

