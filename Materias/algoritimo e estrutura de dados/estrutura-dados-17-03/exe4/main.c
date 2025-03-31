#include <stdio.h>

int fatorial(int num, int expo){
    if(expo == 0){
        return 1;
    }else{
        return num * fatorial(num, expo - 1);
    }
}

int main()
{
    int num, expo, soma;
    printf("Informe um numero:");
    scanf("%d", &num);
    
    printf("Informe seu expoente:");
    scanf("%d", &expo);
    
    soma = fatorial(num,expo);
    
    printf("Soma: %d", soma);

    return 0;
}