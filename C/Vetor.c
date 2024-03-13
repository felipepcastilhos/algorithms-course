#include <stdio.h>

int main()
{
    // DECLARAÇÃO VARIÁVEIS
    int numbers, numb2, i;

    // LEITURA INPUTS
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &numbers);

    // DECLARAÇÃO VETOR
    int vet[numbers];

    // LEITURA VETOR E MANIPULAÇÃO DADOS
    for (i = 0; i < numbers; i++)
    {
        vet[i] = 0;
        printf("Digite um número: ");
        scanf("%d", &numb2);
        if (numb2 < 0)
        {
            vet[i] = numb2;
        }
    }

    // PRINT OUTPUTS
    printf("NÚMEROS NEGATIVOS:\n");
    for (i = 0; i < numbers; i++)
    {
        if (vet[i] != 0)
        {
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}
