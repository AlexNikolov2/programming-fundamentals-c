#include <stdio.h>

void printArray(int *ptr, int size){
    for(int i=0; i<size; i++){
        printf("%d ",ptr[i]);
    }
}
void makeZero(int *ptr, int size){
    for(int i=0; i<size;i++){
        ptr[i] = 0;
    }

}
int main(){
    int size;
    printf("Set size: \n");
    scanf("%d",&size);

    int arr[size];

    for(int i=0; i<size; i++){
        int val;
        printf("Set value: \n");
        scanf("%d",&val);
        arr[i] = val;
    }

    printArray(arr,size);
    makeZero(arr, size);
    printArray(arr, size);
}