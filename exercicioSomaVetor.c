#include <stdio.h>

int main()
{

    int N;
    double media, soma;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (int i = 0; i < N; i++) {
         printf("Digite um numero: ");
         scanf("%lf", &vet[i]);
    }

    printf("\nVALORES:\n");
    for (int i = 0; i < N; i++) {
         printf("%.1lf ", vet[i]);
        }
    printf("\n");

    soma = 0;
    for (int i = 0; i < N; i++) {
         soma = vet[i] + soma;
        }
   printf("SOMA = %.lf\n", soma);

   media = soma / N;

   printf("MEDIA = %.2lf\n", media);

    return 0;
}
