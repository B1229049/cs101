#include <stdio.h>

int main( ) {
  for (int i=1,j=1,k=1; i<=81; i++) {
    printf("%dx%d=%d\t", j, k, j*k);
    k+=1;
    if (k == 10){
      k = 1;
      j+=1;
      printf("\n");
    }
  }

  return 0;
}