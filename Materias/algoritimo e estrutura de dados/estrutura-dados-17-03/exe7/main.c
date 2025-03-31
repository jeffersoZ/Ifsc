#include <stdio.h>
int binarios(int num){
    if(num > 0 ){
        binarios(num/2);
        printf("%d",num%2);
    }
}


int main()
{
    int num, binario;
    printf("Informe um num: ");
    scanf("%d", &num);
    
    binarios(num);

    return 0;
}
