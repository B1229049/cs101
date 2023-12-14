#include <stdio.h>

int main(void) {
  int i=1650;
  if (i > 1500){
    int n = i-1500;
    if (n%100 != 0){
      printf("%d元",70+((n/100)+1)*10);
    }
    else {
      printf("%d元",70+(n/100)*10);
    }
  }
  else {
    printf("70元");
  }
  return 0;
}