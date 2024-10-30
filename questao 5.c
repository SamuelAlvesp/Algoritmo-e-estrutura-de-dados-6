#include <stdio.h>

int mcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mcd(b, a % b);
}

int main() {
    int a, b;

    printf("Digite dois numeros inteiros positivos:\n");
    printf("Numero 1: ");
    scanf("%d", &a);
    printf("Numero 2: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("insira numeros inteiros positivos.\n");
    } else {
        int resultado = mcd(a, b);
        printf("O mínimo comum divisor de %d e %d é: %d\n", a, b, resultado);
    }

    return 0;
}
