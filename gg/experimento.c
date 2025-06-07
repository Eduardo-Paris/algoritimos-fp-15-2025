#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Definição da struct Ponto
typedef struct {
    float x;
    float y;
} Ponto;

// Função para calcular a distância entre dois pontos
float calcularDistancia(Ponto a, Ponto b) {
    return sqrtf((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}

int main(int argc, char *argv[]) {
    if (argc != 5) {
        printf("Uso: %s Xa Ya Xb Yb\n", argv[0]);
        return 1;
    }

    // Convertendo argumentos da linha de comando para float
    Ponto a, b;
    a.x = atof(argv[1]);
    a.y = atof(argv[2]);
    b.x = atof(argv[3]);
    b.y = atof(argv[4]);

    // Calculando e exibindo a distância
    float distancia = calcularDistancia(a, b);
    printf("Distância entre os pontos: %.2f\n", distancia);

    return 0;
}
