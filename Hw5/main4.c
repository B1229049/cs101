#include <stdio.h>

int main( ) {
  int i = 9215;
  int a=(i%10000)/1000;
  int b=(i%10)/1;
  printf("%d",i - a*1000 - b + b*1000 + a);
  return 0;
}
