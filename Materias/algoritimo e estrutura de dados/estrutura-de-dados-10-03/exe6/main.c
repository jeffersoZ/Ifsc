/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void funcaotop(float *ptrTop) 
{
    for(int i = 0; i < 5; i++) {
        printf("Qual o valor: %d\n", i+1);
        scanf("%f", &*(ptrTop+i));
    }
}

int main()
{
    float array[5];
    float *ptrArray = array;

    funcaotop(ptrArray);
    
    for(int i = 0; i < 5; i++) {
        printf("Valor d-%d: %.2f\n", i+1, *(ptrArray + i));
    }
    return 0;
}