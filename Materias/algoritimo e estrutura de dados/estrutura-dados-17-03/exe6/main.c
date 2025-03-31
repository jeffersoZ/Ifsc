#include <stdio.h>

void inverterVetor(int valores[], int inicio, int fim) {
    if (inicio < fim) {
        int temp = valores[inicio];
        valores[inicio] = valores[fim];
        valores[fim] = temp;

        inverterVetor(valores, inicio + 1, fim - 1);
    }
}

int main() {
    int qtd;

    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("A quantidade de elementos deve ser maior que zero.\n");
        return 1;
    }

    int valores[qtd];

    printf("Informe os elementos do vetor:\n");
    for (int i = 0; i < qtd; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &valores[i]);
    }

    inverterVetor(valores, 0, qtd - 1);

    printf("Vetor invertido:\n");
    for (int i = 0; i < qtd; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}
