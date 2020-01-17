#include<stdio.h>


int main(){

  int i, j, n, k = 0, sum = 0, v[6965], flag = 0;

  for(i = 0; i < 6965; i++){
    v[i] = 0;
  }

  for(n = 12; n < 28123; n++){
    for(i = 1; i < (n/2)+1; i++){
      if(n%i == 0){
	sum = sum + i;
      }
    }
    if(sum > n){
      v[k] = n;
      k++;
    }
    sum = 0;
  }
  
  sum = 0;
  
  for(n = 0; n <= 28123; n++){
    for(i = 0; i < k; i++){
      if(v[i] > n){
	break;
      }
      for(j = 0; j < k; j++){
	if(v[j] > n){
	  break;
	}
	if(n == (v[i]+v[j])){
	  flag = 1;
	  break;
	}
      }
      if(flag == 1){
	break;
      }
    }
    if(flag == 0){
      sum = sum+n;
    }
    flag = 0;
  }
  
  printf("%d \n", sum);

  return 0;
}
