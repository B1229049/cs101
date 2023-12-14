#include <stdio.h>

int main(void) {
  int i=250;
  if (i >= 30){
    if (i >= 240){
      printf("%d元",240);
    }
    else if (i%30 == 0){
      printf("%d元",i);
    }
    else{
      printf( "%d元",(i-(i%30)+30));
    }
  }
  else {
    printf("30");
  }
  return 0;
}