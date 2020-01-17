#include<stdio.h>
#include<math.h>

int verificaprimo(int n) {

  int i = 0, aux = 0;

  for(i = 1; i <= sqrt(n); i++){
    if (n % i == 0) {
      aux++;
    }
    if(aux > 1){
      return 0;
    }
  }
    return 1;
}

int main(){

  int i, v[6], cont = 0;
  
  for(i = 2; i < 1000000; i++){
    v[0] = (((((i/100000)%10000)%1000)%100)%10);
    v[1] = ((((i/10000)%10000)%1000)%100)%10;
    v[2] = (((i/1000)%1000)%100)%10;
    v[3] = ((i/100)%100)%10;
    v[4] = (i/10)%10;
    v[5] = i%10;
    
    if(i < 10){
      if(verificaprimo(v[5]) == 1){
	cont++;
      }
    }
    
    if(9 < i && i < 100){
      if(verificaprimo(v[5]+10*v[4]) == 1 && verificaprimo(v[4]+10*v[5]) == 1){
	cont++;
      }
    }
    
    if(99 < i && i < 1000){
      if(verificaprimo(v[5]+10*v[4]+100*v[3]) == 1){
	if(verificaprimo(v[4]+10*v[3]+100*v[5]) == 1){
	  if(verificaprimo(v[3]+10*v[5]+100*v[4]) == 1){
	    cont++;
	  }
	}
      }
    }

    if(999 < i && i < 10000){
      if(verificaprimo(v[5]+10*v[4]+100*v[3]+1000*v[2]) == 1){
	if(verificaprimo(v[4]+10*v[3]+100*v[2]+1000*v[5]) == 1){
	  if(verificaprimo(v[3]+10*v[2]+100*v[5]+1000*v[4]) == 1){
	    if(verificaprimo(v[2]+10*v[5]+100*v[4]+1000*v[3]) == 1){
	      cont++;
	    }
	  }
	}
      }
    }

    if(9999 < i && i < 100000){
      if(verificaprimo(v[5]+10*v[4]+100*v[3]+1000*v[2]+10000*v[1]) == 1){
	if(verificaprimo(v[4]+10*v[3]+100*v[2]+1000*v[1]+10000*v[5]) == 1){
	  if(verificaprimo(v[3]+10*v[2]+100*v[1]+1000*v[5]+10000*v[4]) == 1){
	    if(verificaprimo(v[2]+10*v[1]+100*v[5]+1000*v[4]+10000*v[3]) == 1){
	      if(verificaprimo(v[1]+10*v[5]+100*v[4]+1000*v[3]+10000*v[2])){
		cont++;
	      }
	    }
	  }
	}
      }
    }

    
    if(99999 < i && i < 1000000){
      if(verificaprimo(v[5]+10*v[4]+100*v[3]+1000*v[2]+10000*v[1]+100000*v[0]) == 1){
	if(verificaprimo(v[4]+10*v[3]+100*v[2]+1000*v[1]+10000*v[0]+100000*v[5]) == 1){
	  if(verificaprimo(v[3]+10*v[2]+100*v[1]+1000*v[0]+10000*v[5]+100000*v[4]) == 1){
	    if(verificaprimo(v[2]+10*v[1]+100*v[0]+1000*v[5]+10000*v[4]+100000*v[3]) == 1){
	      if(verificaprimo(v[1]+10*v[0]+100*v[5]+1000*v[4]+10000*v[3]+100000*v[2])){
		if(verificaprimo(v[0]+10*v[5]+100*v[4]+1000*v[3]+10000*v[2]+100000*v[1])){
		  cont++;
		}
	      }
	    }
	  }
	}
      }
    }
  }

  printf("%d \n", cont);
  
  return 0;
}
