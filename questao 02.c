#include <stdio.h>
#include <stdlib.h>

int* gerarPA(int quantidade, int inicial, int razao) {
    int* pa = (int*)malloc(quantidade * sizeof(int));
    for (int i = 0; i < quantidade; i++) {
        pa[i] = inicial + i * razao;
    }
    return pa;
}

void imprimirArray(int* array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int quantidade, inicial, razao;

    printf("Digite a quantidade de elementos da PA: ");
    scanf("%d", &quantidade);
    printf("Digite o valor inicial: ");
    scanf("%d", &inicial);
    printf("Digite a razão: ");
    scanf("%d", &razao);

    int* pa = gerarPA(quantidade, inicial, razao);
    printf("Elementos da PA: ");
    imprimirArray(pa, quantidade);

    free(pa);
    return 0;
}
