#include <stdio.h>

int buscaBinaria(int arr[], int esquerda, int direita, int x) {
    if (direita >= esquerda) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (arr[meio] == x) {
            return meio;
        }

        if (arr[meio] > x) {
            return buscaBinaria(arr, esquerda, meio - 1, x);
        }

        return buscaBinaria(arr, meio + 1, direita, x);
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &x);

    int resultado = buscaBinaria(arr, 0, n - 1, x);

    if (resultado != -1) {
        printf("Elemento encontrado no índice: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
