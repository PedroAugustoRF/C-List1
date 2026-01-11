#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valorUm = 0, valorDois = 0;
    float produtoValor = 0.0;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &valorUm);
    printf("Digite o segundo valor: \n");
    scanf("%d", &valorDois);

    produtoValor = valorUm * valorDois;

    printf("O produto de %d e %d é %.2f. \n", valorUm, valorDois, produtoValor);

    return 0;
}
