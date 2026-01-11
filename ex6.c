#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    const float PI = 3.141592;
    float raioCirculo = 0.0, areaCirculo = 0.0;

    printf("Qual o raio do círculo? \n");
    scanf("%f", &raioCirculo);

    areaCirculo = PI*(raioCirculo*raioCirculo);

    printf("A área desse círculo é: %.2f", areaCirculo);

    return 0;
}
