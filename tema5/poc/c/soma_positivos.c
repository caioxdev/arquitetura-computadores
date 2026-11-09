// PoC Tema 5: soma dos elementos positivos de um vetor.
int soma_positivos(int *v, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > 0)
            soma += v[i];
    }
    return soma;
}
