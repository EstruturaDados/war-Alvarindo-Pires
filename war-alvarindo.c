#include <stdio.h>

struct Territorio {
    char nome[30];
    char dominios[30];
    char tropa[30];
};

int main() {
    printf("Desafio War!\n");

    struct Territorio territorio[5]; 
    int i = 0;

    // Coleta de dados
    do {
        printf("Territorio %d\n", i + 1);

        printf("Nome: ");
        scanf("%s", territorio[i].nome);

        printf("Dominado por: ");
        scanf("%s", territorio[i].dominios);

        printf("Tropa: ");
        scanf("%s", territorio[i].tropa);

        i++;
    } while (i < 5);
    
    // Impressão dos dados
    i = 0;
    do {
        printf("\nTerritorio %d - Nome: %s | Dominios: %s | Tropa: %s\n",
               i + 1, territorio[i].nome, territorio[i].dominios, territorio[i].tropa);
        i++;  // Incrementa o valor de i para evitar loop infinito
    } while (i < 5);

    return 0;  // Adiciona um retorno ao final da função main
}
