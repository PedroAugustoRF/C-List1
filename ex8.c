#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float pes = 0.0, polegadas = 0.0, jardas = 0.0, milhas = 0.0;

    printf("Digite uma medida em Pés: \n");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes * 0.333333;
    milhas = pes * 0.000189394;

    printf("%.2f pés convertido para polegadas, jardas e milhas são respectivamente: %.2f pol, %.4f yd e %.7f mi. \n", pes, polegadas, jardas, milhas);

    return 0;
}
