#include <stdio.h>

int calc_sum(int arr[], int size){ //instead of arr[] you can use *ptr
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i]; //ptr[i] instead of arr[i]
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
