#include <stdio.h>

int main(void) {
  double pi = 4.0f;
  int n = 0;
  for (int i=2; i<=200000; i++){
    if (i%2==0) {
      n = -1;
    }
    else {
      n = 1;
    }
    pi = pi + n*(4.0f/((2.0f*i)-1));
  }
  printf("%.5lf",pi);

  return 0;
}