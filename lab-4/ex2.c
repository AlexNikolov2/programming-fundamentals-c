#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;

    printf("Set a: \n");
    scanf("%d",&a);

    printf("Set b: \n");
    scanf("%d",&b);

    int *pointer_a = &a;
    int *pointer_b = &b;

    int add = *pointer_a + *pointer_b;
    int sub = *pointer_a - *pointer_b;
    int mul = *pointer_a * *pointer_b;
    float div = (float)*pointer_a / *pointer_b;

    printf("%d + %d = %d\n", a, b,add);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b, mul);
    printf("%d / %d = %f\n",a,b, div);
}