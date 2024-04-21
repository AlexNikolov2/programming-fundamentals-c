#include <stdio.h>

int calc_sum(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int size;
    printf("Set size: \n");
    scanf("%d",&size);

    int arr[size];

    for(int i = 0; i < size; i++){
        int val;
        printf("Set value: \n");
        scanf("%d",&val);
        arr[i] = val;
    }

    int sum = calc_sum(arr, size);

    printf("Sum: %d\n", sum);
}
