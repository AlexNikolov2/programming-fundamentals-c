#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("Set value for a: \n");
    scanf("%d",&a);
    printf("Set value for b: \n");
    scanf("%d",&b);
    printf("Set value for c: \n");
    scanf("%d",&c);

    if(a == b  && a == c & c == b){
        printf("EQUAL");
    }
    else{
        printf("NOT EQUAL");
    }
}