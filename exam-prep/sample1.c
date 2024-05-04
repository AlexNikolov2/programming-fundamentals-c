#include <stdio.h>

int main(){
    int a = 5;
    int *ptra = &a;
    *ptra = 6;

    printf("a = %d\n ptra = %d \n", a, *ptra);
}