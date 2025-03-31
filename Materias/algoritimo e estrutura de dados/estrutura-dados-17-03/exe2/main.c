#include <stdio.h>

int somas(int num1, int soma, int num2){
    if(num1 == num2){
        return soma;
    }else{
        return somas(num1,soma + num2 ,num2 + 1);
        
    }
}

int main()
{
    int num, soma;
    printf("Informe um numero:");
    scanf("%d", &num);
    
    soma = somas(num,0,0);
    
    printf("Soma: %d", soma);

    return 0;
}