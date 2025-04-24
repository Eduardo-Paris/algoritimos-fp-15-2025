#include <stdio.h> 

int main(int agrc, char* argv[]){

int Q = 0;

 printf("--------------------------------------------------------------------------\n");
        
        printf("-CONTROLE DE NOTAS-      -aperte X pra reiniciar-\n");
    
    printf("--------------------------------------------------------------------------\n");
        
printf("Escreva o numero de alunos: \n");
scanf("%d", &Q);

float notas[Q];

for(int i = 0; i < Q; i++){
printf("Escreva a nota do aluno %d:", i);
scanf("%f", &notas[i]);

}

for(int i = 0; i < Q; i++){
printf(" Nota do aluno %d: %.2f", i, notas[i]);

}




printf("Quantidade de alunos: %d", Q);


    return 0;
} 