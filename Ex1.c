//Emanuelle Lino Scheifer
/*1- Escreva um programa que armazene em um vetor a idade de somente 4 pessoas,
solicitando ao usuário esses dados. Em posse destes, extraia a soma, o produto, a média
aritmética e a média ponderada (com pesos 1.2, 5.6, 3.14 e 1.72 respectivamente).
Apresente os dados ao usuário.*/

#include <stdio.h>

int main()
{

    float idades[4]; // Armazena as idades das 4 pessoas
    float soma = 0; // Armazena a soma das idades
    float produto = 1; // Armazena o produto das idades
    float media_aritmetica; // Armazena a média aritmética das idades
    float pesos[4] = {1.2, 5.6, 3.14, 1.72}; // Armazena os pesos
    float soma_pesos = 0; // Armazena a soma dos pesos
    float media_ponderada; // Armazena a média ponderada das idades

    // Solicita as idades ao usuário
    for (int i = 0; i < 4; i++)
    {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%f", &idades[i]);
    }

    // Calcula a soma das idades
    for (int i = 0; i < 4; i++)
    {
        soma += idades[i];
    }

    // Calcula o produto das idades
    for (int i = 0; i < 4; i++)
    {
        produto *= idades[i];
    }

    // Calcula a média aritmética
    media_aritmetica = soma / 4;

    // Calcula a soma dos pesos
    for (int i = 0; i < 4; i++)
    {
        soma_pesos += pesos[i];
    }

    // Calcula a média ponderada
    media_ponderada = 0;
    for (int i = 0; i < 4; i++)
    {
        media_ponderada += idades[i] * pesos[i] / soma_pesos;
    }

    // Imprime os resultados
    printf("Soma das idades: %.2f\n", soma);
    printf("Produto das idades: %.2f\n", produto);
    printf("Media aritmetica: %.2f\n", media_aritmetica);
    printf("Média ponderada: %.2f\n", media_ponderada);

    return 0;
}
