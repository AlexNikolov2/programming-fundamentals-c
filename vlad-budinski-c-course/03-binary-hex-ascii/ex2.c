#include <stdio.h>

int main(){
    char myChar;
    printf("Set char \n");
    scanf("%c",&myChar);

    if(myChar >= 'A' && myChar <= 'Z'){
        printf("Uppercase");
    }
    else if(myChar >= 'a' && myChar <= 'z'){
        printf("Lowercase");
    }
    else if(myChar >= '0' && myChar <= '9'){
        printf("Digit");
    }
    else{
        printf("Other");
    }

    return 0;
}