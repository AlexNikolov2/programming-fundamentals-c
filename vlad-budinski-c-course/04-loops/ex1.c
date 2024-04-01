#include <stdio.h>

int main(){
    int num, pow;

    printf("Set num: \n");
    scanf("%d",&num);
    printf("Set power: \n");
    scanf("%d",&pow);

    int result = 1;

    while(pow > 0){
        result = result * num;
        pow--;
    }

    printf("%d", result);
}