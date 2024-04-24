#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Write your string: \n");
    fgets(str, 100, stdin);
    int length = strlen(str) - 1;
    printf("%d\n", length);
}