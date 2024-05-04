#include <stdio.h>

int main(){
    int a,b;

    printf("Set a: \n");
    scanf("%d",&a);
    printf("b: \n");
    scanf("%d",&b);
    int sum = 0;

    if(a > b){
        for(int i= a-1; i > b; i--){
            sum += i;
        }
    }
    else if(a < b){
        for (int i = a+1; i < b; i++){
            sum += i;
        }
    }
    printf("%d", sum);
}