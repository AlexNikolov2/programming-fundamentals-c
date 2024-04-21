#include <stdio.h>
#include <string.h>

void find_glasni(char str[100]){
    int letterCount = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){
            letterCount++;
        }
    }
    printf("letterCount = %d\n", letterCount);
}
int main(){
    char str[100];
    printf("Set string: \n");
    fgets(str, sizeof(str), stdin);
    find_glasni(str);
}