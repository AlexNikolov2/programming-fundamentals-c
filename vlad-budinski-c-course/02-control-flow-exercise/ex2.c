#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int absolute;

    printf("Set num: \n");
    scanf("%d",&num);

    if(num >= 0){
        absolute = num;
        printf("|%d| = %d", num, absolute);
    }
    else{
        absolute = num * -1;
        printf("|%d| = %d", num, absolute);
    }
}