#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    char estado1[50], cidade1[50];
    int populacao1;

    char estado2[50], cidade2[50];
    int populacao2;

    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao1);
    getchar(); // Limpa o \n pendente

    // Entrada dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("População: ");
    scanf("%d", &populacao2);

    // Exibição dos dados
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);

    // Comparação das populações
    printf("\n--- Resultado da Comparação (População) ---\n");

    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu com maior população!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Carta 2 (%s) venceu com maior população!\n", cidade2);
    } else {
        printf("Empate! Ambas as cartas têm a mesma população.\n");
    }

    return 0;
}
