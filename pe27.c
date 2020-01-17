#include<stdio.h>
#include<math.h>

int verificaprimo(int n) {

  int i = 0, aux = 0;

  if(n < 0){
    n = n*(-1);
  }

  for(i = 1; i <= sqrt(n); i++){
    if(n % i == 0){
      aux++;
      if(aux > 1){
	return 0;
      }
    }
  }

  return 1;
}

int resolveproblema(){

  int i, a, b, indexa = 0, indexb = 0, cont = 0;

  for(a = -999; a <= 999; a++){
    for(b = -999; b <= 999; b++){
      for(i = 0; i > -1; i++){
	if(verificaprimo(i*i+a*i+b) != 1){
	  if(i > cont){
	    cont = i-1;
	    indexa = a;
	    indexb = b;
	  }
	  break;
	}
      }
    }
  }

  return(indexa*indexb);
}


int main(){

  printf("%d \n", resolveproblema());

  return 0;

}
