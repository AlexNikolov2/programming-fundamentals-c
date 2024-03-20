#include <stdio.h>

int main(){
    int num;
    int units, decimals, hundreds;

    printf("Set num between 100 and 999 \n");
    scanf("%d",&num);

    units = num % 10;
    decimals = (num / 10) % 10;
    hundreds = num / 100;

    int sum = units + decimals + hundreds;

    printf("Sum: %d\n",sum);

}