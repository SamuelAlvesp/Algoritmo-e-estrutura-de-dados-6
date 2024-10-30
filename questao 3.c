#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um numero inteiro positivo.\n");
    } else {
        int resultado = fibonacci(n);
        printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, resultado);
    }

    return 0;
}
