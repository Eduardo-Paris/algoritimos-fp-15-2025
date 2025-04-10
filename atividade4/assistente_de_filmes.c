#include <stdio.h>

int main(int arg, char* argv[]) {
    char opcao;
    char voltar;

   
   
    
    
    do{
        
        printf("--------------------------------------------------------------------------\n");
        
        printf("-ASSISTENTE VIRTUAL DE FILMES-      -aperte X pra reiniciar a pesquisa-\n");
    
    printf("--------------------------------------------------------------------------\n");
        
        
    printf("Ola, qual tipo de filme gostaria de ver hoje?\n");
    printf("Prefere um filme leve ou um intenso? Escreva abaixo L para leve ou I para intenso!\n");
    printf("Escolha uma opcao:\n");
    printf("I - para Intenso\n");
    printf("L - para Leve\n");

    scanf(" %c", &opcao);

    
    
    if(opcao == 'I'|| opcao == 'i') {
        printf("Entendi, quer ver um filme intenso!\n");    
        printf("Ja que esta procurando algo mais intenso, prefere um filme de acao ou algum filme de terror?\n");
        printf("Escolha um genero de filme:\n");
        printf("A - para Acao\n");
        printf("T - para Terror\n"); 
        scanf(" %c", &opcao);

        if(opcao == 'A'|| opcao == 'a') {
            printf("Legal! Eu tenho varias ideias de filmes desse tipo.\n");
            printf("O que acha mais legal, super herois ou filmes do mundo real?\n");
            
            
            printf("H - para Herois\n");
            printf("R - para Realista\n");
            scanf(" %c", &opcao);
            
            if(opcao == 'R'|| opcao == 'r') {
            printf("Legal! Eu te recomedo assistir 'Madmax' tenho certeza que vai achar interessante, se passa no deserto da Australia num mundo pos-apocaliptico!\n"); }
            
            else if(opcao == 'H'|| opcao == 'h') {
            printf("Muito bem super herois, otima escolha!\n");
            printf(" Ja ouviu falar da iniciativa Vingadores? A ideia era reunir um grupo de pessoas excepcionais, ver se eles se tornam algo mais. Pelo menos foi isso que Nick Furry disse. Eu te recomendo ver Vingadores 1!\n");
            }
            
            
        } 
        else if(opcao == 'T'|| opcao == 't') {
            printf("Terror, entendi, esta a fim de ver um filme de terror psicologico, ou um de terror sobrenatural?\n");
            
            printf("P - para Psicologico\n");
            printf("S - para Sobrenatural\n");
            scanf(" %c", &opcao);
            
            if(opcao == 'P'|| opcao == 'p') {
            printf("Legal! Eu te recomedo assistir 'CORRA!' tenho certeza que vai achar interessante!.\n"); }
            
            else if(opcao == 'S'|| opcao == 's') {
            printf("Quer ver terror sobrenatural? Eu te recomendo assistir 'O exorcista', vai levar sustos!\n");
            }
            
            
        } 
        
        
        
        
        

    } else if(opcao == 'L'|| opcao == 'l') {
        printf("Certo, quer um filme leve!\n");
        printf("Ja que quer algo leve, prefere um filme animado ou um filme de comedia?\n");
        printf("Escolha um genero de filme:\n");
        printf("D - para Desenho animado\n");
        printf("C - para Comedia\n");

        scanf(" %c", &opcao);

        if(opcao == 'D'|| opcao == 'd') {
            printf("Que tal assistir 'Megamente'? Um filme animado e divertido feito pela Dreamworks, seu protagonista se chama Megamente um alienigena azul super inteligente e careca.\n");
        } 
        
        else if(opcao == 'C'|| opcao == 'c') {
            printf("Eu te recomendo ver 'As Branquelas', um filme classico dos anos 2000! Com certeza vai te fazer rir bastante.\n");
        
            
        } 
        
        

    } 
    
printf("\nDeseja voltar ao inicio? Aperte X: ");
        scanf(" %c", &voltar);
    


} while (voltar == 'X' || voltar == 'x');

    printf("-ERRO FECHE O PROGRAMA-\n");
    
    
    
    
    
    return 0;
}

