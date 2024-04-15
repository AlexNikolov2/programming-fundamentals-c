#include <stdio.h>

void factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result *= i;
    }
    printf("Factories of %d is %d\n", num, result);
}
int main(){
    int num;
    printf("Set num \n");
    scanf("%d", &num);

    factorial(num);
}