#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    printf("Set value for a: \n");
    scanf("%d",&a);
    printf("Set value for b: \n");
    scanf("%d",&b);

    if(a == b){
        printf("EQUAL");
    }
    else{
        printf("NOT EQUAL");
    }
}