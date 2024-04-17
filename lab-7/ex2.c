#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Set string: \n");
    fgets(str, sizeof(str), stdin);
    char letter;
    printf("Set letter: \n");
    scanf("%c", &letter);
    int letterCount = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == letter){
            letterCount++;
        }
    }
    printf("%d", letterCount);
}