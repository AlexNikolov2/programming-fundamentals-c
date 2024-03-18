#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a;
    int b;
    int h;
    float area;
    printf("Set a: \n");
    printf("Set b: \n");
    printf("Set h: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&h);
    area = (((float)a + (float)b) / 2) * (float)h;
    printf("Area is %f", area);
}