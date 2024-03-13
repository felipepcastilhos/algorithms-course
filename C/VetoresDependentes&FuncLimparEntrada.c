#include <stdio.h>
#include <string.h>

// FUNÇÃO PARA LIMPAR BUFFER LEITURA STRING COM ESPAÇO
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main()
{
    // DECLARAÇÃO VARIÁVEIS
    int N;
    double soma, soma2, media, porcentagem;

    // LEITURA INPUTS
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    // DECLARAÇÃO VARIÁVEIS DEPENDENTES
    char nomes[N][50];
    int idades[N];
    double alturas[N];

    // LEITURA VETORES
    for (int i = 0; i < N; i++)
    {
        printf("Dados da %dª pessoa:\n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    // MANIPULAÇÃO DADOS
    soma = 0;
    for (int i = 0; i < N; i++)
    {
        soma += alturas[i];
    }
    media = soma / N;

    soma2 = 0;
    for (int i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            soma2++;
        }
    }
    porcentagem = (soma2 * 100.0) / N;

    // PRINT OUTPUTS
    printf("\nAltura média: %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", porcentagem);
    for (int i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
