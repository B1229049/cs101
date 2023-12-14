#include <stdio.h>

int main(void) {
  int x=9;
  int y=2;
  int z=8;
  if (x > 0){
    printf("%d\n", x*100 + y*10 + z);
  }
  else {
    printf("%d\n",((x*-1)*100 + y*10 + z)*-1);
  }
  return 0;
}