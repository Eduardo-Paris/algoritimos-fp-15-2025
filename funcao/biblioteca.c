/*
Retorna o maior de 2 numeros inteiros
*/
int maior_2n(int a, int b){
int maior ;
if(a > b){
    maior = a;
}

else{
maior = b;
}
return maior;
}
/* 
retorna o maior de 3 numeros inteiros
*/
int maior_3n(int a, int b, int c){
    int maior = maior_2n(a, b);
    return maior_2n(maior, c);
}
/*
retorna maior entre N numeros
*/
int maior_n(int numeros[], int n){
   int maior; 
   for(int i = 0; i < n-1; i++){
    maior = maior_2n(numerios[0], numeros[1]);
   }
}