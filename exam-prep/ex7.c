#include <stdio.h>

int findBiggest(int *ptr, int size){
    int biggest = -5000;

    for(int i = 0; i < size; i++){
        if(ptr[i] >= biggest){
            biggest = ptr[i];
        }
    }

    printf("biggest: %d\n", biggest);
}

int main(){
    int size;
    printf("Set array size: \n");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++){
        int val;
        printf("Set value: \n");
        scanf("%d",&val);
        arr[i] = val;
    }

    int *ptr_arr = arr;

    findBiggest(ptr_arr, size);

}