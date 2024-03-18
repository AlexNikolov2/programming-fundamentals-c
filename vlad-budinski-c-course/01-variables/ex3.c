#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float width;
    float height;
    scanf("%f", &width);
    scanf("%f", &height);

    float area = width * height;

    printf("Area is %f: ", area);
}