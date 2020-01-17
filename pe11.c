#include <stdio.h>

int main () {

  int m[20][20], i, j, k, l, sl1 = 1, sl2 = 1, sc1 = 1, sc2 = 1, sdp1 = 1, sdp2 = 1, sds1 = 1, sds2 = 1, aux = 0;
  FILE *arq;

  arq = fopen("pe11.txt", "r");

  for (i = 0; i < 20; i++) {
    for (j = 0; j < 20; j++) {
      fscanf(arq, "%d", &m[i][j]);
    }
  }

  for (k = 0; k < 16; k++) {
    for (i = 0; i < 16; i++, aux++, sl1 = 1) {
      for (j = i; j < i+4; j++) {
	if (aux == 0) {
	  sl2 = sl2*m[k][j];
	} else {
	  sl1 = sl1*m[k][j];
	  if (sl1 > sl2) {
	    sl2 = sl1;
	  }
	}
      }
    }
  }

  aux = 0;
  for (k = 0; k < 16; k++) {
    for (i = 0; i < 16; i++, aux++, sc1 = 1) {
      for (j = i; j < i+4; j++) {
	if (aux == 0) {
	  sc2 = sc2*m[j][k];
	} else {
	  sc1 = sc1*m[j][k];
	  if (sc1 > sc2) {
	    sc2 = sc1;
	  }
	}
      }
    }
  }

  aux = 0;
  for (l = 0; l < 16; l++) {
    for (k = 0; k < 16; k++, aux++, sdp1 = 1) {
      for (i = l, j = k; j < k+4; j++, i++) {
	if (aux == 0) {
	  sdp2 = sdp2*m[i][j];
	} else {
	  sdp1 = sdp1*m[i][j];
	  if (sdp1 > sdp2) {
	    sdp2 = sdp1;
	  }
	}
      }
    }
  }

  aux = 0;
  for (l = 0; l < 16; l++) {
    for (k = 19; k > 3; k--, aux++, sds1 = 1) {
      for (i = l, j = k; j > k-4; j--, i++) {
	if (aux == 0) {
	  sds2 = sds2*m[i][j];
	} else {
	  sds1 = sds1*m[i][j];
	  if (sds1 > sds2) {
	    sds2 = sds1;
	  }
	}
      }
    }
  }



  printf("%d %d %d %d\n", sc2, sl2, sdp2, sds2);

  fclose(arq);
  return 0;
}
