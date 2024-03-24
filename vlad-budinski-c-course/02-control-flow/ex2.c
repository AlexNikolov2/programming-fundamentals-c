#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;

    printf("Set number: \n");
    scanf("%d",&a);

    if(a % 2 == 0){
        printf("Num is even");
    }
    else{
        printf("Num is odd");
    }
}