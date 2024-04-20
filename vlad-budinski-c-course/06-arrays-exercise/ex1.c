#include <stdio.h>
#define SIZE 3

int main(){
    int data[SIZE] = {1, 2, 2000};
    int data2[SIZE];

    for(int i = 0; i < SIZE; i++){
        data2[i] = data[i];
    }

    for(int i = 0; i < SIZE; i++){
        printf("%d", data[i]);
        printf("\n");
        printf("%d", data2[i]);
    }

}
