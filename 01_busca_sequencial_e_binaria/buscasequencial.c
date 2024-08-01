#include <stdio.h>

int busca_seq(int v[], int tam, int x){
    int i = 0;
    while(i < tam && v[i] != x){
        i++;
    if(i < tam)
        return i;
    else
        return -1;
    }
    // (5) i < tam garante que eu percorra todos os elementos do vetor
    // (5) v[i] != x verifica se encontrou o elemento x

}


int main(void){

    return 0;
}