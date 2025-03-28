#include <stdio.h>
#include <stdlib.h>

int main() {
    int p = 61, q = 53;
    int n = p * q;
    int phi = (p - 1) * (q - 1);

    int e = 17;

    int d = 1;
    while ((d * e) % phi != 1) {
        d++;
    }

    printf("Chave publica: (e = %d, n = %d)\n", e, n);
    printf("Chave privada: (d = %d, n = %d)\n", d, n);

    char mensagem[256];
    printf("Digite a mensagem para criptografar sem espaco: ");
    scanf("%255s", mensagem);

    printf("Mensagem criptografada: ");
    for (int i = 0; mensagem[i] != '\0'; i++) {
        long long int criptografado = 1;
        for (int j = 0; j < e; j++) {
            criptografado = (criptografado * mensagem[i]) % n;
        }
        printf("%lld ", criptografado);
    }
    printf("\n");

    printf("DIgite o que quer desimcriptografar termine com -1:\n");
    long long int cifra;
    printf("Mensagem descriptografada: ");
    while (scanf("%lld", &cifra) && cifra != -1) {
        long long int descriptografado = 1;
        for (int j = 0; j < d; j++) {
            descriptografado = (descriptografado * cifra) % n;
        }
        printf("%c", (char)descriptografado);
    }
    printf("\n");

    return 0;
}
