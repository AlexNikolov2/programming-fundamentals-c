#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, *b;
    printf("set a: \n");
    scanf("%d",&a);

    printf("a = %d, &a = %d\n", a, &a);

    *b = &a;

    printf("&b = %d\n", &b, *b);

    b = 10;

    printf("b = %d, &b = %d\n", b, &b);


}