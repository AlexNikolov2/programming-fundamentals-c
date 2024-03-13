#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* allocate(unsigned int N){
    int *array = (int*)malloc(sizeof(int)*N);
    memset(array, 0, sizeof(int)*N);
    return array;
}
int main(){
    int *arr = allocate(4);
    int i = 0;
    for(;i < 40; i++){
        arr[i] = 1;
        printf("%d", arr[i]);
    }
}

