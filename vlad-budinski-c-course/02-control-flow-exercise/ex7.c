#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;

    printf("set a: \n");
    scanf("%d",&a);
    printf(" set b: \n");
    scanf("%d",&b);
    printf(" set c: \n");
    scanf("%d",&c);

    if(a % b == 0 || a % c == 0 || b % c == 0 || b % a == 0 || c % b == 0 || c % a == 0){
        printf("divisible");
    }
    else{
        printf("not divisible");
    }
}