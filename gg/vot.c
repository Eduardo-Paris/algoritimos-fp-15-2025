#include <stdio.h>
#include <stdlib.h>

// Variáveis globais para armazenar os votos
int votos_lula = 0;
int votos_bolsonaro = 0;
int votos_nulo = 0;

void mostrar_resultados() {
    printf("\n--- RESULTADO DOS VOTOS ---\n");
    printf("Lula (13): %d votos\n", votos_lula);
    printf("Bolsonaro (22): %d votos\n", votos_bolsonaro);
    printf("Nulo: %d votos\n", votos_nulo);
    printf("---------------------------\n\n");
}

int main() {
    char entrada;
    int voto;

    while (1) {
        printf("----------------------------------------------------------------------------\n");
        printf("         URNA ELETRONICA\n");
        printf(" - Justica Eleitoral-Governo Federal -\n");
        printf("-----------------------------------------------------------------------------\n");
        printf("APERTE QUALQUER TECLA PARA PODER VOTAR OU '$' PARA VER OS RESULTADOS: ");
        entrada = getchar();
        getchar(); // Captura o ENTER restante

        if (entrada == '$') {
            mostrar_resultados();
            continue;
        }

        printf("Digite seu voto (13 para Lula, 22 para Bolsonaro): ");
        scanf("%d", &voto);
        getchar(); // Limpa ENTER do buffer

        if (voto == 13) {
            printf("Você votou em: Lula\n");
        } else if (voto == 22) {
            printf("Você votou em: Bolsonaro\n");

        } else {
            printf("Você votou NULO\n");
        }

        char confirmar;
        printf("Confirma o voto? (s para sim / qualquer outra tecla para mudar): ");
        confirmar = getchar();
        getchar(); // Limpa ENTER

        if (confirmar == 's' || confirmar == 'S') {
            if (voto == 13) votos_lula++;
            else if (voto == 22) votos_bolsonaro++;
            else votos_nulo++;

            printf("Voto computado com sucesso.\n");
        
            ;
            printf("----------------------------------------------------------------------------\n");
        printf("FIM\n\n")
        
        printf("-----------------------------------------------------------------------------\n");
        } else {
            printf("Voto cancelado. Reiniciando...\n\n");
        }
    }

    return 0;
}