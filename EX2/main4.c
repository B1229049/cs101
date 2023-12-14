#include <stdio.h>

int main(void) {
  int i=1992;
  if (i%400 == 0) {
    printf("閏年");
  }
  else if (i%4 == 0 && i%100 != 0) {
    printf("閏年");
  }
  else {
    printf("平年");
  }
  return 0;
}