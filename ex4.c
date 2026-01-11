#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float notaUm = 0.0, notaDois = 0.0, notaTres = 0.0, mediaAluno = 0.0;

    printf("Digite a N1 do aluno: \n");
    scanf("%f", &notaUm);
    printf("Digite a N2 do aluno: \n");
    scanf("%f", &notaDois);
    printf("Digite a N3 do aluno: \n");
    scanf("%f", &notaTres);

    mediaAluno = (notaUm + notaDois + notaTres)/3;

    printf("A média do aluno foi: %.2f \n", mediaAluno);
    return 0;
}
