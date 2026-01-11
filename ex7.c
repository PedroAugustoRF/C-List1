#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float salarioAtual = 0.0, porcentoAumento = 0.0, salarioAumento = 0.0, salarioNovo = 0.0;

    printf("Qual seu salário? \n");
    scanf("%f", &salarioAtual);
    printf("Quantos %% de aumento você vai receber? \n");
    scanf("%f", &porcentoAumento);

    salarioAumento = (salarioAtual*porcentoAumento)/100;
    salarioNovo = salarioAtual + salarioAumento;

    printf("Seu aumento foi de R$:%.2f e seu novo salario é R$:%.2f", salarioAumento, salarioNovo);

    return 0;
}
