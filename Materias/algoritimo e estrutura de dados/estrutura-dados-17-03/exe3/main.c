#include <stdio.h>

int somas(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somas(n - 1); 
    }
}

int main() {
    int num, soma;

    printf("Informe um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O número deve ser inteiro e positivo.\n");
    } else {
        soma = somas(num);
        printf("Soma de 0 até %d: %d\n", num, soma);
    }

    return 0;
}