#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char operation;

    int a;
    int b;
    int result;

    printf("Write operation: \n");
    scanf("%c",&operation);

    printf("Write num a: \n");
    scanf("%d",&a);

    printf("Write num b: \n");
    scanf("%d",&b);

    switch(operation){
        case '+':
            result = a + b;
            printf("%d + %d = %d",a,b, result);
            break;
        case '-':
            result = a - b;
            printf("%d - %d = %d",a,b, result);
            break;
        case '/':
            result = a / b;
            printf("%d / %d = %d",a,b, result);
            break;
        case '*':
            result = a * b;
            printf("%d x %d = %d", a,b,result);
            break;
    }
}