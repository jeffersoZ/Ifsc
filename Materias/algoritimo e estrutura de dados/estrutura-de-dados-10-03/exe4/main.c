/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float array[10] = {1,2,3,4,5,6,7,8,9,10};
    float * ptrArray;
    ptrArray = array; 
    
    for(int i = 0; i<10;i++){
        printf("Caminho-%d %i\n", i+1, &ptrArray[i]);
    }
    return 0;
}
