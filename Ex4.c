//Emanuelle Lino Scheifer
/* 4. Some e multiplique as matrizes obtidas no exercício 3 e apresente ambos os resultados
ao usuário. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TAM 20

int main()
{
    int linhas, colunas;

    // Solicita as dimensões das matrizes ao usuário
    do
    {
        printf("Digite o numero de linhas das matrizes (maximo 20): ");
        scanf("%d", &linhas);
    }
    while (linhas > MAX_TAM);

    do
    {
        printf("Digite o numero de colunas das matrizes (maximo 20): ");
        scanf("%d", &colunas);
    }
    while (colunas > MAX_TAM);

    int matriz_identidade[MAX_TAM][MAX_TAM]; // Armazena a matriz identidade
    int matriz_aleatoria[MAX_TAM][MAX_TAM]; // Armazena a matriz com dados aleatórios
    int matriz_soma[MAX_TAM][MAX_TAM]; // Armazena a matriz resultante da soma
    int matriz_produto[MAX_TAM][MAX_TAM]; // Armazena a matriz resultante do produto

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

    srand(time(NULL)); // Inicializa a semente para a função rand()

    // Inicializa a matriz com dados aleatórios
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz_aleatoria[i][j] = rand() % 10;
        }
    }

    // Soma as duas matrizes
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz_soma[i][j] = matriz_identidade[i][j] + matriz_aleatoria[i][j];
        }
    }

    // Multiplica as duas matrizes
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz_produto[i][j] = 0;
            for (int k = 0; k < colunas; k++)
            {
                matriz_produto[i][j] += matriz_identidade[i][k] * matriz_aleatoria[k][j];

            }
        }
    }
    // Impressões das matrizes de soma e multiplicação
    printf("Matriz resultante da soma: \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz_soma[i][j]);
        }
        printf("\n");
    }

    printf("Matriz resultante do produto: \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz_produto[i][j]);
        }
        printf("\n");
    }
    return 0;
}


