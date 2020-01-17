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

int main(){

  int i, j = 1, v[1062], conv[4], mat[1062][3];

  for(i = 0; i < 1062; i++){
    v[i] = 0;
  }

  for(i = 0; i < 1062; i++){
    for(j = 0; j < 3; j++){
      mat[i][j] = 0;
    }
  }

  for(i = 1009; i < 9974; i++){
    if(verificaprimo(i) == 1){
      v[j-1] = i;
      printf("%d ", i);
      if(j%30 == 0){
	printf("\n");
      }
      j++;
    }
  }

  for(i = 0; i < 1062; i++){
    conv[0] = (v[i]/1000)%10;
    conv[1] = (v[i]/100)%10;
    conv[2] = (v[i]/10)%10;
    conv[3] = v[i]%10;

    if

  }

  printf("\n");

  return 0;
}
