#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Set num: \n");
    scanf("%d",&num);

    if(num < 0){
        printf("-1");
    }
    else if(num > 0){
        printf("1");
    }
    else{
        printf("0");
    }
}