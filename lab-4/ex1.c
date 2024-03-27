#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, *b;
    a = 10;
    *b = &a;
    printf("a = %d, b = %d\n",a,b);
}