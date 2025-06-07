#include <stdio.h>
#include <stdlib.h>



float raiz_quadrada(float n) {
    if (n < 0) return -1; 

    float x = n;
    float y = 1.0f;
    float e = 0.00001f; 

    

    
    while ((x - y) > e || (y - x) > e) {
        x = (x + y) / 2.0f;
        y = n / x;
    }

    return x;
}


struct Ponto {
    float x;
    float y;
};

int main(int argc, char *argv[]) {
    if (argc != 5) {
        printf("Uso: %s Xa Ya Xb Yb\n", argv[0]);
        return 1;
    }

    struct Ponto a, b;

    
    a.x = atof(argv[1]);

    a.y = atof(argv[2]);
    b.x = atof(argv[3]);
    b.y = atof(argv[4]);

   
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    float distancia = raiz_quadrada(dx * dx + dy * dy);

    printf("Distância: %.2f\n", distancia);

    return 0;
}