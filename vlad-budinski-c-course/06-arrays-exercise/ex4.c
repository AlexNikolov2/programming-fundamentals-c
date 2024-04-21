#include <stdio.h>

int main(){
    int index1 = 0, index2 = 1;
    int size;
    printf("Set size: \n");
    scanf("%d",&size);

    int arr[size];

   
    for(int i=0; i<size; i++){
        int val;
        printf("Set val: \n");
        scanf("%d",&val);
    }

    int minVal = arr[0] + arr[1];
    int currentVal;

    for(int i = 0; i<size; i++){
        for(int j = 0; j<size; j++){
            currentVal = arr[i] + arr[j];
            if(abs(currentVal) < abs(minVal)) {
                minVal = currentVal;
            }
        }
    }

    printf("%d",minVal);
}