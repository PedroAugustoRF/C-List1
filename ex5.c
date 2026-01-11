#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float alturaTriangulo = 0.0, baseTriangulo = 0.0, areaTriangulo = 0.0;

    printf("Digite a altura do triângulo: \n");
    scanf("%f", &alturaTriangulo);
    printf("Digite a base do triângulo: \n");
    scanf("%f", &baseTriangulo);

    areaTriangulo = (baseTriangulo *alturaTriangulo)/2;

    printf("A área desse triângulo é:%.2f \n", areaTriangulo);
    return 0;
}
