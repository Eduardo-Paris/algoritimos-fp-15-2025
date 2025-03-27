#include <stdio.h> 

int main(int agrc, char* argv[]){
    int idade; 
    float altura;
    float peso;

    printf ("Digite idade:");
    scanf("%d", &idade);

    printf ("Digite altura:");
    scanf("%f", &altura);

    printf ("Digite peso:");
    scanf("%f", &peso);

    printf("A idade eh %d\n", idade);
    printf("A altura eh %.2f\nO peso eh %.2f", altura, peso );





    return 0;
} 