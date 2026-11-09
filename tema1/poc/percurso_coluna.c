#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 2048 // Tamanho da matriz (2048x2048)

int main() {
    // Alocacao dinamica
    int **matriz = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        matriz[i] = (int *)malloc(N * sizeof(int));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = 1;
        }
    }

    clock_t inicio = clock();
    long long soma = 0;

    // PERCURSO COLUNA POR COLUNA (Desfavorece a localidade espacial)
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            soma += matriz[i][j];
        }
    }

    clock_t fim = clock();
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Soma (Coluna por Coluna): %lld\n", soma);
    printf("Tempo de execucao: %f segundos\n", tempo);

    for (int i = 0; i < N; i++) free(matriz[i]);
    free(matriz);

    return 0;
}