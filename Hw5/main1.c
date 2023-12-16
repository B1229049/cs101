#include <stdio.h>

int main(void) {
  int n=7;
  for (int i=1; i<=n; i++) {
    for (int j=n; j>=0; j--) {
      if (j<i){
        printf("%d ",i);
        continue;
      }
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}