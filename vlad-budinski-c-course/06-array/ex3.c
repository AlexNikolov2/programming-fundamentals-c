#include <stdio.h>

int main(){
    int size;
    printf("Set size: \n");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
        int value;
        printf("Set value: \n");
        scanf("%d",&value);
        arr[i] = value;
    }
    for(int j = size-1; j >= 0; j--){
        printf("%d\n",arr[j]);
    }
    
}