#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

    char opcao;

  float r, D, d, L, b, h, B, A;

printf("area.c\n");
printf("Escolhauma opcao: \n");
printf("c - Circulo\n");
printf("l - Losango\n");
printf("q - Quadrado\n");
printf("r - Retangulo\n");
printf("t - Triangulo\n");
printf("z - Trapezio\n");

scanf("%c",  &opcao);

switch(opcao){

case "c":
printf("Circulo\n");
break;

case "l":
printf("Losango\n");
printf("losango.c\n");
    printf("digite o valor da diagonal maior (D):");
    scanf("%f", &D);
    printf("Digite o valor da diagonal menor (d):"):
    scanf("%f", &d);
    A = (D * d)/2;

   printf("A = %.2f\n", A);
break;

case "q":
printf("Quadrado\n");
float L, A;
printf("quadrado.c\n")
printf("Digite o valor do lado (L):");
scanf("%f", &L);
A = L * L;
printf("A = %.2f", A);
break;

case "r":
printf("Retangulo\n");
printf("retangulo.c\n");
printf("digite o valor da base (b):");
scanf("%f", &b);
printf("digite o valor da altura (h):");
scanf("%f", &h);
A = b * h;
printf("A = %.2f\n", A);
break;

case "t":
printf("Triangulo\n");
printf("retangulo.c\n");
printf("digite o valor da base (b):");
scanf("%f", &b);
printf("digite o valor da altura (h):");
scanf("%f", &h);
A = (b * h)/2;
printf("A = %.2f\n", A);
break;

case "z":
printf("trapezio\n");
printf("trapezio.c\n");

printf("digite o valor da base maior(B):");
scanf("%f", &b);

printf("digite o valor da base menor(b):");
scanf("%f", &b);

printf("digite o valor da altura (h):");
scanf("%f", &h);

A = ((B + b) * h)/2;
printf("A = %.2f\n", A);
break;

default:
printf("Opcao Invalida");

return 0;

}




}