#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float a = 9.95;
    float b = 17.88;
    float temp;
    printf("%.2f \n", a);
    printf("%.2f \n", b);
    temp = a;
    a = b;
    b = temp;
    printf("%.2f \n", a);
    printf("%.2f \n", b);
}