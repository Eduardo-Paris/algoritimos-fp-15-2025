#include<stdio.h> 
#include<stdlib.h>

int main(int argc, char argv*[]){

int qtd_linhas = 0;
float n;
float *numeros;
Ponto *numeros;

FILE *arq = fopen("dados.txt","r");

if(arq ==NULL){
    printf("erro ao abrir arquivo.");
    return 1;
}

while (fscanf(arq, "%f", &n)!= EOF)
{
qtd_linhas++;
}

numeros = malloc(sizeof(Ponto) * qtd_linhas);

 printf("qtd_linhas = %d\n qtd_linhas");

if(numeros != NULL){
    int i = 0;
    fseek(arq, 0, SEEK_SET);
    soma_x = 0;
    soma_y = 0;
    while (fscanf(arq, "%d,%f"))
}

for(int i = 0; i < qtd_linhas; i++){
printf("%f\n", numeros[i]);
}

fclose(arq);

    return 0;
}