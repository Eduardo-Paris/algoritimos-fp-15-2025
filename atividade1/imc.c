#include <stdio.h>
#include <math.h>

int main(int argc, char* argv []){

float altura, peso, imc;

printf ("Cauculadora IMC\n");
//imprime uma mensagem e ler
// um valor float na variavel de altura

printf ("Digite a altura:");
scanf ("%f", &altura);

printf("Digite o peso:");
scanf ("%f", &peso);


imc = peso / powf (altura, 2);

printf("IMC = %.2f\n", imc );

if(imc <= 18.5){
printf("Baixo Peso\n");
}

if(imc > 18.5 && imc <= 24.9){
printf("Intervalo Normal\n");
}

if(imc > 24.9 && imc <= 29.9){
printf("Sobrepeso\n");
}

if(imc > 29.9 && imc <= 34.9){
printf("Obesidade\n");
}

if(imc > 34.9 && imc <= 39.9){
printf("Obesidade II\n");
}

if(imc > 39.9){
printf("Obesidade III\n");
}


return 0;



}