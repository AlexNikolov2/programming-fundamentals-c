#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    int sum = 0;
    printf("Set start number:");
    scanf("%d", &a);
    printf("Set end number:");
    scanf("%d", &b);

    if(a < b){
        for(int i = a+1; i < b; i++){
            sum += i;
        }
        printf("Result is: %d", sum);
    }
    if(a > b){
        for(int i = b; i < a; i++){
            sum += i;
        }
        printf("Result is: %d", sum);
    }
}