//Emanuelle Lino Scheifer
/* 3. Escreva um programa que crie uma matriz identidade com as dimensões propostas pelo
usuário. Para evitar problemas de memória, defina o tamanho máximo da matriz
identidade para 20x20. Crie uma matriz com dados aleatórios do mesmo tamanho da
matriz identidade sugerida e a exiba para o usuário. */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TAM 20

int main()
{
    int linhas, colunas;

    // Solicita as dimensões da matriz identidade ao usuário
    do
    {
        printf("Digite o numero de linhas da matriz identidade (maximo 20): ");
        scanf("%d", &linhas);
    }
    while (linhas > MAX_TAM);

    do
    {
        printf("Digite o numero de colunas da matriz identidade (maximo 20): ");
        scanf("%d", &colunas);
    }
    while (colunas > MAX_TAM);

    int matriz_identidade[MAX_TAM][MAX_TAM]; // Armazena a matriz identidade

    // Inicializa a matriz identidade
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (i == j)
            {
                matriz_identidade[i][j] = 1;
            }
            else
            {
                matriz_identidade[i][j] = 0;
            }
        }
    }

    int matriz_aleatoria[MAX_TAM][MAX_TAM]; // Armazena a matriz com dados aleatórios

    srand(time(NULL)); // Inicializa a semente para a função rand()

    // Inicializa a matriz com dados aleatórios
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz_aleatoria[i][j] = rand() % 10;
        }
    }

    // Exibe a matriz identidade
    printf("Matriz identidade:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d\t", matriz_identidade[i][j]);
        }
        printf("\n");
    }

    // Exibe a matriz com dados aleatórios
    printf("Matriz com dados aleatorios:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d\t", matriz_aleatoria[i][j]);
        }
        printf("\n");
    }

    return 0;
}
