#include <stdio.h>

int maiorDosTres(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3;

    printf("Digite tres numeros inteiros:\n");
    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);
    printf("Numero 3: ");
    scanf("%d", &num3);

    int maior = maiorDosTres(num1, num2, num3);
    printf("O maior numero entre %d, %d e %d é: %d\n", num1, num2, num3, maior);

    return 0;
}
