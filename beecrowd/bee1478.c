/*
	Autor: Vitor Fernandes Silva
	Data: 16/09/2024
	Algoritmo: Matriz Quadrada II
*/

#include <stdio.h>

void inputM(int M[][100], int tam, int linha, int coluna) {
    if (linha >= tam) 
		return;

    int valor;
    if (linha == coluna)
        valor = 1;
    else if (linha < coluna)
        valor = coluna - linha + 1;
    else
        valor = linha - coluna + 1;

    M[linha][coluna] = valor;


    if (coluna + 1 < tam) {
        inputM(M, tam, linha, coluna + 1);
    } else { 
        inputM(M, tam, linha + 1, 0);
    }
}


void outputM(int M[][100], int tam, int linha, int coluna) {
    if (linha >= tam) 
		return; 

    
    if (coluna == 0)
        printf("%3d", M[linha][coluna]);
    else
        printf(" %3d", M[linha][coluna]);

    
    if (coluna + 1 < tam) {
        outputM(M, tam, linha, coluna + 1);
    } else {
        printf("\n");
        outputM(M, tam, linha + 1, 0);
    }
}

int main() {
    int tam;
    int M[100][100];

    while (1) {
        scanf("%d", &tam);

        if (tam == 0) break;

        
        inputM(M, tam, 0, 0);

        
        outputM(M, tam, 0, 0);

        
        printf("\n");
    }

    return 0;
}
