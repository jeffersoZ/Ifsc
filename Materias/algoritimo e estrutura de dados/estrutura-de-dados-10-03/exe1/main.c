/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int iInt;
    float  fFloat;
    char cChar;
        
    int * ptrInt;
    float * ptrFloat;
    char * ptrChar;
    
    ptrInt = &iInt;
    ptrFloat = &fFloat;
    ptrChar = &cChar;
    
    iInt = 9;
    fFloat = 9;
    cChar = 'a';
    
    printf("Antes\n");
    printf("int: %d\n", *ptrInt);
    printf("float: %f\n", *ptrFloat);
    printf("char: %c\n", *ptrChar);
    
    
    iInt = 9 + 19;
    fFloat = 9 + 3.4;
    cChar = 'b';
    
    printf("Depois\n");
    printf("int: %d\n", *ptrInt);
    printf("float: %f\n", *ptrFloat);
    printf("char: %c\n", *ptrChar);
    
    return 0;
}
