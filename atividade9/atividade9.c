#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char* argv[]){


int menor, maior, esperado, sorteado;
FILE *log_txt = fopen("log.txt","a");
menor = atoi (argv[1]);
maior = atoi(argv[2]);
esperado = atoi(argv[3]);

strand((unsigned)time(NULL));

if(menor >= maior){
printf("ARGUMENTO INVALIDO\n");
return 1;
}


if(esperado < menor || esperado > maior){
printf("ARGUMENTO INVALIDO");
return 1;

}

sorteado = (rand() % (maior - menor + 1)) + menor;

if(esperado == sorteado){
    fprintf(log_txt, "sorteado\n"); 
}
else{
    fprintf(log_txt, "nao sorteado\n");
}
  fprintf(log_txt, "minimo=%d maximo=%d esperado=%d sorteado=%d\n", menor, maior, esperado, sorteado);

    fclose(log_txt);
    return 0;
}