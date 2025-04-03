#include <stdlib.h>
#include <stdio.h>



int somaVetor(int *lista[], int tamanho){
    int soma , i;
    for(i = 0; i <= tamanho - 1; i++){
        soma += *(lista[i]);
        printf("Aquii");
    }
    return soma;
}

int main(){
    int lista[] = {1,2,3,4,5,6,7,8,9};
    int tamanho = sizeof(lista)/sizeof(int);

    int soma = somaVetor(*lista, tamanho);
    printf("%ddadsad", soma);
    printf("DISdosa");
    return 0;
}