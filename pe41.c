#include<stdio.h>
#include<math.h>

int verificaprimo(int n) {

  int i = 0, aux = 0;

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

int converte(int n, int x){

  int i;

  if(n == 1){
    return x;
  }

  for(i = 0; i < n-1; i++){
    x = x*10;
  }

  return x;
}

int fatorial(int n){

  int i, m = n;

  for(i = 1; i < m; i++){
    n = n*i;
  }

  return n;
}

int resolveproblema(int n){

  int i, j, k, v[n-1], conv = 0, parcial = 0, aux = 0;

  for(i = 0; i < n; i++){
    v[i] = i+1;
  }

  k = 0;
  for(i = 0; i < fatorial(n); i++){
    for(j = 0; j < n; j++){
      conv = conv + converte(n-j,v[j]);
    }
    printf("%d \n", conv);
    
    if(verificaprimo(conv) == 1 && conv > parcial){
      parcial = conv;
    }
    
    aux = v[k];
    v[k] = v[k+1];
    v[k+1] = aux;
    k++;
    conv = 0;
    
    if((k+1)%n == 0){
      k = 0;
    }
  }

  return parcial;

}

int main(){

  int i, result = 0;

  for(i = 2; i < 5; i++){
    result = resolveproblema(i);
  }

  printf("%d \n", result);
	
  return 0;
}
