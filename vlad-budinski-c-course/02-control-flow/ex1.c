#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;

    printf("Set a: \n");
    scanf("%d",&a);
    printf("Set b: \n");
    scanf("%d",&b);

    int max_num;

    if(a > b){
        max_num = a;
    }
    else{
        max_num = b;
    }

    printf("max_num: %d\n",max_num);
}