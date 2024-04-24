#include <stdio.h>
#include <string.h>

int main(){
    int size = 100;
    char str[size];
    printf("Set sentence: \n");
    fgets(str,size,stdin);
    int wordCount = 1;
    for(int i=0;i<size;i++){
        if(str[i] == ' '){
            wordCount++;
        }
    }
    printf("%d words\n",wordCount);
}