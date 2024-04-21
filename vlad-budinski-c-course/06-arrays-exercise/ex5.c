#include <stdio.h>

int main(){
    int i, temp;
    int arr[4] = {5,8,1,4};

    temp = arr[0];

    for(i = 1; i < 4; i++){
        arr[i - 1] = arr[i];
    }

    arr[4 - 1] = temp;

    for(i = 1; i < 5; i++){
        printf("%d ", arr[i - 1]);
    }
}