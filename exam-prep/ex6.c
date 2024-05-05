#include <stdio.h>

void findSum(int *ptr, int size){
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum += ptr[i];
    }

    printf("sum = %d\n", sum);
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

    findSum(ptr_arr, size);

}