#include <stdio.h>

int main(){
    int size;
    printf("Set size: \n");
    scanf("%d",&size);
    int arr[size];
    int max_index = 0;
    for(int i=0; i<size; i++){
        int value;
        printf("Set value:");
        scanf("%d",&value);
        arr[i] = value;
    }
    for(int i=0; i<size; i++){
        if(arr[i] > arr[max_index]){
            max_index = i;
        }
    }
    printf("%d",max_index);
    
}