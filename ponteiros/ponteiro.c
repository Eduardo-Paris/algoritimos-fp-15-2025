#include <stdio.h>

#define MAX 225

//global
int y=1;
 
 void incrementaX(int *x){

    while (*x < 5)
    {

        y++;
        *x = 11;

    }
 }

 int main(int agrc, char* argv[]){

int z = 1;
    int w = 2;
    incrementaX(&z);
    
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    printf("*z = %p\n", &z);
    printf("*w = %p\n", &w);

    return 0;
}


 