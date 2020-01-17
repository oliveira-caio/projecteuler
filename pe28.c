#include<stdio.h>


int main(){

  int i, j = 0, k = 2, cont = 0;

  for(i = 1; i <= 1002001; i++){
    if(i%2 == 1 && i%k == 1){
      cont = cont + i;
      if(i != 1){
	j++;
	if(j%4 == 0){
	  k = k+2;
	}
      }
    }
  }

  printf("%d \n", cont);
}
