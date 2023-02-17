//Emanuelle Lino Scheifer
/* 6. (Quest�o b�nus) Construa um programa que calcule o determinante de matrizes pelo
m�todo de Laplace. Essa quest�o servir� para atribui��o de pontua��o extra na segunda
avalia��o bimestral, caso seja resolvida e comentada de forma a provar o
compreendimento do algoritmo e do Teorema de Laplace para c�lculo de determinantes. */

#include <stdio.h>

#define MAX 100

// Fun��o para calcular o determinante de uma matriz
int determinante(int matriz[MAX][MAX], int tamanho)
{
    int det = 0, sinal = 1;

    // Caso base: tamanho da matriz � igual a 1
    if (tamanho == 1)
        return matriz[0][0];

    // Loop para percorrer as colunas da matriz
    for (int i = 0; i < tamanho; i++)
    {
        int submatriz[MAX][MAX];

        // Cria a submatriz excluindo a linha 0 e a coluna i
        for (int linha = 1; linha < tamanho; linha++)
        {
            int coluna_submatriz = 0;
            for (int coluna = 0; coluna < tamanho; coluna++)
            {
                if (coluna == i)
                    continue;
                submatriz[linha-1][coluna_submatriz++] = matriz[linha][coluna];
            }
        }

        // Soma o produto do elemento da primeira linha da matriz com o
        // determinante da submatriz correspondente
        det += sinal * matriz[0][i] * determinante(submatriz, tamanho-1);

        // Alterna o sinal da soma
        sinal = -sinal;
    }

    return det;
}

int main()
{
    int tamanho, matriz[MAX][MAX];

    // Recebe o tamanho da matriz
    printf("Informe o tamanho da matriz (maximo 100x100): ");
    scanf("%d", &tamanho);

    // Verifica se o tamanho da matriz � v�lido
    if (tamanho > MAX)
    {
        printf("Tamanho da matriz inv�lido.\n");
        return 1;
    }

    // Recebe os elementos da matriz
    printf("Informe os elementos da matriz:\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula e exibe o determinante da matriz
    int det = determinante(matriz, tamanho);
    printf("Determinante da matriz: %d\n", det);

    return 0;
}

