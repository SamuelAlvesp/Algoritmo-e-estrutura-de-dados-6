#include <stdio.h>

int somaRecursiva(int n) {
    if (n == 1) {
        return 1;
    }
    return n + somaRecursiva(n - 1);
}

int main() {
    int n;

    printf("Digeit um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("insira um numero inteiro positivo.\n");
    } else {
        int resultado = somaRecursiva(n);
        printf("A soma de 1 ate %d e: %d\n", n, resultado);
    }

    for (int i = 1; i <= 5; i++) {
        printf("A soma de 1 ate %d e: %d\n", i, somaRecursiva(i));
    }

    return 0;
}
