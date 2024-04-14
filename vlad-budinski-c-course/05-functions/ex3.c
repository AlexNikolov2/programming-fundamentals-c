#include <stdio.h>

void sequence(int length){
    int num = 0;
    for(int i=0; i < length; i++){
        num = num * 10 + 9;
    }
    printf("%d", num);
}
int main(){
    int length;
    printf("Set length of sequence \n");
    scanf("%d",&length);

    sequence(length);
}