#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valorUm = 0, valorDois = 0, valorTres = 0, somaValor = 0;

    printf("Digite um valor inteiro: \n");
    scanf("%d", &valorUm);
    printf("Digite outro valor inteiro: \n");
    scanf("%d", &valorDois);
    printf("Digite o último valor inteiro: \n");
    scanf("%d", &valorTres);

    somaValor = valorUm + valorDois + valorTres;

    printf("A soma de %d, %d e %d é: %d", valorUm, valorDois, valorTres, somaValor);
    return 0;
}
