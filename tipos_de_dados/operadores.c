#include <stdio.h>
#include <math.h>


int main(int argc, char* argv[]){

float n1, n2;

printf("Digite o valor de n1 mano:");
scanf("%f", &n1);


printf("Digite o valor de n2 mano:");
scanf("%f", &n2);




// adição 
float soma = n1 + n2; 
printf("%.2f + %.2f = %.2f\n ",  n1, n2, soma);

//subtração
float diferenca = n1 - n2;
printf("%.2f - %.2f = %.2f\n",  n1, n2, diferenca);

// Multiplicação

float produto = n1 * n2;
printf("%.2f * %.2f = %.2f\n",  n1, n2, produto);

//Divisão 
float quociente = n1 / n2;
printf("%.2f / %.2f = %.2f\n",  n1, n2, quociente);

// Potenciação
float potencia = powf (n1, n2);
printf("%.2f^%.2f = %.2f\n",  n1, n2, potencia);


// Radiciação
float raiz = sqrtf(n1);
printf("%.2f^1/2 = %.2f\n",  n1, raiz);

//Resto da divisão
int resto = (int) n1 % (int) n2; 
printf("%.0f %% %.0f = %.d\n",  n1, n2, resto);

//Quociente da divisão
int quociente_inteiro = n1 / (int) n2;
printf("%.2f//%.2f = %d\n",  n1, n2, quociente_inteiro);


// Incremento
float incremento = n1++;
printf("%.2f++ = %.2f\n",  n1, incremento);


//Decremento

float decremento = n1--;
printf("%.2f-- = %.2f\n",  n1, decremento);




}