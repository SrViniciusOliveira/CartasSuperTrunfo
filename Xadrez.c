#include <stdio.h>

// Constantes
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

// Funções Recursivas (nível mestre)

// Movimento recursivo do Bispo (Cima + Direita)
void moverBispoRecursivo(int passo){
    if (passo == 0)return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(passo - 1);
}

// Movimento recursivo da Torre (Direita)
void moverTorreRecursivo(int passo){
    if (passo == 0) return;
    printf("Direita\n");
    moverTorreRecursivo(passo - 1);
}

// Movimento recursivo da Rainha (Esquerda)
void moverRainhaRecursivo(int passo){
    if (passo == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(passo - 1);
}

// Cavalo: L para cima e direita, com múltiplas váriaveis, break e continue 
void moverCavaloMestre(){
    printf("\nCavalo (Cima + Direita com break/continue):\n");

    for ( int i = 0; i < 3; i++){
        if(i == 2) break; // só queremos dois passos para cima 
        printf("Cima\n");

        for (int j = 0; j < 2; j++){
            if(j != 1) continue; // só um passo para a direita
            printf("Direita\n");
        }
    }
}

int main(){
    // Nível Novato
    printf("Bispo (Diagonal Superior Direito):\n");
    for (int i = 0; i < MOV_BISPO; i++ ){
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\nTorre (Direita):\n");
    int j = 0;
    while (j < MOV_TORRE){
        printf("Direita\n");
        j++;
    } 

    printf("\nRainha para (Esquerda):\n");
    int k = 0;
    do{
        printf("Esquerda\n");
        k++;
    }while (k < MOV_RAINHA);

    // Nível  Aventureiro
    printf("\nCavalo (Baixo + Esquerda):\n");

    for (int l = 0; l < 2; l++ ){
        printf("Baixo\n");
        int m = 0;
        while( m < 1){
            printf("Esquerda\n");
            m++;
        }

    }

    // Nível Mestre
    printf("\nBispo (Diagonal Superior Direita Recursivo):\n");
    moverBispoRecursivo(MOV_BISPO);

    printf("\nTorre (Direita Recursivo):\n");
    moverTorreRecursivo(MOV_TORRE);

    printf("\nRainha (Esquerda Recursivo):\n");
    moverRainhaRecursivo(MOV_RAINHA);

    moverCavaloMestre();

    return 0;
}