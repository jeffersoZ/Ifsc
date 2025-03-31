#include <stdio.h>

int somas(int valores[], int num, int soma){
    if(num == 5){
        return soma;
    }else{
        return somas(valores, num + 1, soma + valores[num]);
    }
}
int main()
{
    int valores[5] = {2,4,6,3,4};
    int soma;
    
    soma = somas(valores,0,0);
    
    printf("soma : %d", soma);
    return 0;
}