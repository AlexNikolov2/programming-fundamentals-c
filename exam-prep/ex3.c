#include <stdio.h>

int main(){
    int a,b;

    printf("Set a: \n");
    scanf("%d",&a);
    printf("b: \n");
    scanf("%d",&b);
    int sum = 0;
    int product = 1;

    if(a > b){
        for(int i= a-1; i > b; i--){
            if(i % 2 == 0){
                sum += i;
            }
            else{
                product *= i;
            }
        }
    }
    else if(a < b){
        for (int i = a+1; i < b; i++){
            if(i % 2 == 0){
                sum += i;
            }
            else{
                product *= i;
            }
        }
    }
    printf("%d \n", sum);
    printf("%d", product);
}