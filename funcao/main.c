#include <stdio.h>

int main(int argc, char* argv[]){
      if(argc < 3){
        printf("Argumentos invalidos");
        return 1;
      }

if(strcmp(argv[1], " -maior") == 0){
    if(argc < 4){
        printf("Argumentos invalidos");
        return 1;
    }

    x = atoi(argv[2]);
    y = atoi(argv[3]);
    printyf("%d", maior_2n(x, y));
}

return 0;
}