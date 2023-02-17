//Emanuelle Lino Scheifer
/* 5. Escreva um programa que seja capaz de receber duas matrizes de tamanhos
especificados pelo usu�rio. Verifique a possibilidade de fazer as opera��es de soma e
multiplica��o nelas e, se for poss�vel, fa�a-o. */

#include <stdio.h>

#define MAX_LINHAS 20
#define MAX_COLUNAS 20

int main()
{
    int linhas1, colunas1, linhas2, colunas2;
    int matriz1[MAX_LINHAS][MAX_COLUNAS];
    int matriz2[MAX_LINHAS][MAX_COLUNAS];
    int matriz_soma[MAX_LINHAS][MAX_COLUNAS];
    int matriz_produto[MAX_LINHAS][MAX_COLUNAS];

    // Recebe as dimens�es das duas matrizes
    printf("Digite o numero de linhas da primeira matriz: ");
    scanf("%d", &linhas1);
    printf("Digite o numero de colunas da primeira matriz: ");
    scanf("%d", &colunas1);
    printf("Digite o numero de linhas da segunda matriz: ");
    scanf("%d", &linhas2);
    printf("Digite o numero de colunas da segunda matriz: ");
    scanf("%d", &colunas2);

    // Verifica se � poss�vel realizar a soma e a multiplica��o
    if (linhas1 != linhas2 || colunas1 != colunas2)
    {
        printf("Nao e possivel realizar a soma. As matrizes precisam ter as mesmas dimensoes.\n");
    }
    else
    {
        // Recebe os elementos da primeira matriz
        printf("Digite os elementos da primeira matriz:\n");
        for (int i = 0; i < linhas1; i++)
        {
            for (int j = 0; j < colunas1; j++)
            {
                scanf("%d", &matriz1[i][j]);
            }
        }

        // Recebe os elementos da segunda matriz
        printf("Digite os elementos da segunda matriz:\n");
        for (int i = 0; i < linhas2; i++)
        {
            for (int j = 0; j < colunas2; j++)
            {
                scanf("%d", &matriz2[i][j]);
            }
        }

        // Realiza a soma das duas matrizes
        for (int i = 0; i < linhas1; i++)
        {
            for (int j = 0; j < colunas1; j++)
            {
                matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }

        // Exibe a matriz resultante da soma
        printf("\nMatriz resultante da soma:\n");
        for (int i = 0; i < linhas1; i++)
        {
            for (int j = 0; j < colunas1; j++)
            {
                printf("%d ", matriz_soma[i][j]);
            }
            printf("\n");
        }


// Verifica se � poss�vel realizar a multiplica��o
        if (colunas1 != linhas2)
        {
            printf("N�o e possivel realizar a multiplicacao entre as matrizes informadas.\n");
        }
        else
        {
            int matriz_produto[linhas1][colunas2];

            // Realiza o produto das duas matrizes
            for (int i = 0; i < linhas1; i++)
            {
                for (int j = 0; j < colunas2; j++)
                {
                    matriz_produto[i][j] = 0;
                    for (int k = 0; k < colunas1; k++)
                    {
                        matriz_produto[i][j] += matriz1[i][k] * matriz2[k][j];
                    }
                }
            }

            // Exibe a matriz resultante do produto
            printf("Matriz resultante do produto:\n");
            for (int i = 0; i < linhas1; i++)
            {
                for (int j = 0; j < colunas2; j++)
                {
                    printf("%d ", matriz_produto[i][j]);
                }
                printf("\n");
            }
        }
    }
}
