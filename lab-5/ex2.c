#include <stdio.h>

void frequency(int arr[], int frequency[]){

    for (int i = 0; i < 10; i++) {
        frequency[arr[i]]++;
    }
}
int main(){
    int array[10];
    int freq[10] = {0};
    int num;

    for(int i=0; i<10; i++){
        printf("Set num: \n");
        scanf("%d",&num);

        if(num > -5000 & num < 5000){
            array[i] = num;
        }
        else{
            printf("Invalid num");
            i--;
        }
    }

    frequency(array, freq);

    for(int i = 0; i < 10; i++){
        if(freq[i] > 0){
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }

}