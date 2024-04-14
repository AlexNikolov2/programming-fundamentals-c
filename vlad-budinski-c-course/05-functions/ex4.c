#include <stdio.h>

void toLower(int code){
    char letter;
    if(code >= 65 && code <= 90){
        letter = (char)(code + 32);
        printf("%c", letter);
    }
    else{
        letter = (char)(code);
        printf("%c", letter);
    }
}
int main(){
    char letter;
    printf("Set letter \n");
    scanf("%c",&letter);
    int code = (int)letter;
    printf("%d \n",code);
    toLower(code);
}