#include <stdio.h>
#include <time.h>

int main() {
    int valores[] = {10, 100, 1000};
    double tempos[3];
    int quantidade = 3;

    printf("=========================================\n");
    printf("     ALGORITMO LINEAR - O(n)\n");
    printf("=========================================\n\n");

    for (int k = 0; k < quantidade; k++) {
        int n = valores[k];
        volatile int ultimo = 0;

        printf("Teste %d de %d\n", k + 1, quantidade);
        printf("Percorrendo os numeros de 1 ate %d...\n", n);

        clock_t inicio = clock();

        for (int i = 1; i <= n; i++) {
            ultimo = i;
        }

        clock_t fim = clock();

        tempos[k] = (double)(fim - inicio) / CLOCKS_PER_SEC;

        printf("Percurso concluido: 1 -> %d\n", ultimo);
        printf("Quantidade processada: %d elementos\n", n);

        if (k < quantidade - 1) {
            printf("\nPressione ENTER para executar o proximo teste...");
            getchar();
            printf("\n-----------------------------------------\n\n");
        }
    }

    printf("\n=========================================\n");
    printf("          RESUMO DOS RESULTADOS\n");
    printf("=========================================\n");

    for (int k = 0; k < quantidade; k++) {
        printf("N = %-4d | Tempo = %.6f segundos\n", valores[k], tempos[k]);
    }

    printf("=========================================\n");

    return 0;
}
