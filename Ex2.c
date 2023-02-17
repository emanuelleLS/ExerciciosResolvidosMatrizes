//Emanuelle Lino Scheifer
/*2. Em uma matriz de tamanho 4x2 armazene na primeira coluna as idades e na segunda
coluna o resultado as operações encontradas no exercício 1. Encontre a matriz
transposta desta e a apresente formatada ao usuário. */
#include <stdio.h>

int main()
{
    float matriz[4][2]; // Armazena as idades e os resultados
    float matriz_transposta[2][4]; // Armazena a matriz transposta

    // Solicita as idades ao usuário
    for (int i = 0; i < 4; i++)
    {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%f", &matriz[i][0]);
    }

    // Calcula a soma das idades
    float soma = 0;
    for (int i = 0; i < 4; i++)
    {
        soma += matriz[i][0];
    }

    // Calcula o produto das idades
    float produto = 1;
    for (int i = 0; i < 4; i++)
    {
        produto *= matriz[i][0];
    }

    // Calcula a média aritmética
    float media_aritmetica = soma / 4;

    // Armazena os resultados na matriz
    for (int i = 0; i < 4; i++)
    {
        matriz[i][1] = soma + produto + media_aritmetica;
    }

    // Calcula a matriz transposta
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz_transposta[j][i] = matriz[i][j];
        }
    }

    // Imprime a matriz transposta formatada
    printf("Matriz transposta:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.2f\t", matriz_transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
