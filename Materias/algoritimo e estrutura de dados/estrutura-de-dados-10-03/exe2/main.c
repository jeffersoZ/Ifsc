/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int iInt1, iInt2 ;
        
    int * ptrInt1;
    int * ptrInt2;

    if(&iInt1 > &iInt2){
        printf("Maior\n");
        printf("int1: %d\n", &iInt1);
        printf("Menor\n");
        printf("int2: %d\n", &iInt2);
    }else{
        printf("Maior\n");
        printf("int2: %d\n", &iInt2);
        printf("Menor\n");
        printf("int1: %d\n", &iInt1);
    }
    return 0;
}
