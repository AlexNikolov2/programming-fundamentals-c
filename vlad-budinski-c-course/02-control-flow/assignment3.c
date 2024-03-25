#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Set 3-digit num: \n");
    scanf("%d",&num);

    int units = num % 10;
    int decimals = (num / 10) % 10;
    int hundreds = num / 100;

    if (hundreds < decimals && decimals < units && hundreds < units){
        printf("ASCENDING");
    }
    else{
        printf("NOT ASCENDING");
    }
}