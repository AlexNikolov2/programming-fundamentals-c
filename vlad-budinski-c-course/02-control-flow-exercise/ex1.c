#include <stdio.h>
#include <stdbool.h>

int main(){
    int num;
    printf("Set num: \n");
    scanf("%d", &num);

    if(num > 10 && num < 100){
        printf("%d is double digit num \n", num);
    }
    else if(num > 100 && num < 1000){
        printf("%d is triple digit num \n", num);
    }
    else{
        printf("who knows... :)");
    }
}