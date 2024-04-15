#include <stdio.h>

int main(){
    int num;
    printf("Set num: \n");
    scanf("%d",&num);

    int tens = num / 10;
    int units = num % 10;

    int max_digit = -1;

    if(tens > units){
        max_digit = tens;
    }
    else if(units > tens){
        max_digit = units;
    }

    printf("%d", max_digit);
}