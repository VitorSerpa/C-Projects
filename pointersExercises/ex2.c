#include <stdlib.h>
#include <stdio.h>

int i = 10, j = 20, aux = 0;
int *ptr_i, *ptr_j;

void changeValues(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    printf("%d, %d" , i, j);
    
    changeValues(&j, &i);
    printf("%d, %d" , i, j);
    printf("%d", &i);
}

