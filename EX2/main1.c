#include <stdio.h>

int main(void) {
  int i=64;
  if (i & (i-1)){
    printf("false");
  }
  else {
    printf("true");
  }
  return 0;
}