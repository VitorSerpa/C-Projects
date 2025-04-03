#include <stdlib.h>
#include <stdio.h>

int i = 10, j = 20;
int *ptr_i, *ptr_j;

int main(){
    ptr_j = &j;
    ptr_i = &i;
    
    printf("%d , %d", *ptr_i, *ptr_j);
    return 0;
}