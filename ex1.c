#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nomePessoa[50];
    char emailPessoa[50];
    int livrosPessoa = 0;
    float salarioPessoa = 0.0;

    printf("Digite seu nome: \n");
    fgets(nomePessoa, 50, stdin);
    printf("Qual seu E-Mail? \n");
    scanf("%s", emailPessoa);
    printf("Quantos livros você leu ano passado? \n");
    scanf("%d", &livrosPessoa);
    printf("Qual seu salário? \n");
    scanf("%f", &salarioPessoa);
    printf("Seu nome é: %s Seu E-mail é: %s, ano passado você leu %d livros e seu salário é R$: %.2f. \n", nomePessoa, emailPessoa, livrosPessoa, salarioPessoa);
    return 0;
}
