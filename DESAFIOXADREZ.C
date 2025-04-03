#include<stdio.h>
int main(){
    //Move  a Torre 5 casas para a direita
    for (int i = 0; i < 5; i++) {
        printf ("Direita\n"); //  Imprime a direção do movimento
    }
     //Move o bispo 5 casas para cima , direita
    for (int i = 0; i < 5; i++) {
     printf("Cima,Direita\n"); //Imprime a direção do movimento
    }
     // Move a Rainha 8 casas para a esquerda
     for (int i = 0; i < 5; i++){
        printf("Esquerda\n"); // Imprime a direção do movimento
     }

    return 0;
}