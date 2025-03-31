/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void funcaotop(float *ptrTop) 
{
    for(int i = 0; i < 10; i++) {
        printf("Caminho-%d: %.2f\n", i + 1, *(ptrTop + i));
    }
}

int main()
{
    float array[10] = {1, 2, 3, 4, 432, 6, 7, 8, 123, 10};
    float *ptrArray = array;

    funcaotop(ptrArray);

    return 0;
}