#include <stdio.h>

int main(){
    int wordCount = 1;
    char str[100];
    printf("Set string: ");
    fgets(str,sizeof(str),stdin);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' '){
            wordCount++;
        }
    }
    printf("%d\n", wordCount);
}