#include <stdio.h>
#include <stdbool.h>

bool are_equal(int a, int b, int c){
    return a == b && a == c && b == c;
}

int main(){
    int a,b,c;

    printf("set a\n");
    scanf("%d", &a);
    printf("set b\n");
    scanf("%d", &b);
    printf("set c\n");
    scanf("%d", &c);

    if(are_equal(a,b,c)){
        printf("equal\n");
    }
    else{
        printf("not equal\n");
    }
}