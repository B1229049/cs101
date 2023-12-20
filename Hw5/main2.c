/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double pi = 4.0f;
    int n = 1;
    double x = 0;
    for (int i=2; i <= 200000; i++){
        if (i % 2 == 0){
            n = -1;
        }
        else {
            n = 1;
        }
        x = n*(4.0f/((2.0f*i)-1));
        pi = pi + x;
        if (pi < 3.141594 && pi > 3.141585){
            printf("%f\n",x);
            break;
        }
    }
    
    return 0;
}
