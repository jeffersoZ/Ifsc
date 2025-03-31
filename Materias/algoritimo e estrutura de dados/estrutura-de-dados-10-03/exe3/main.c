/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void CalcMaior(int N1, int N2, int *ptrMaior, int *ptrMenor)
{
    if (N1 > N2) {
        *ptrMaior = N1;  
        *ptrMenor = N2;  
    } else {
        *ptrMaior = N2; 
        *ptrMenor = N1; 
    }
}

int main()
{
    int iInt1, iInt2;
    int maior, menor;

    printf("Digite dois números: ");
    scanf("%d %d", &iInt1, &iInt2);

    CalcMaior(iInt1, iInt2, &maior, &menor);

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
