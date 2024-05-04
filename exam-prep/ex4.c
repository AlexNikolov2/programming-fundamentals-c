#include <stdio.h>

void binary(int decimalNum){
    int binaryNum[256];

    int i = 0;
    while(decimalNum > 0){
        binaryNum[i] = decimalNum % 2; 
        decimalNum = decimalNum / 2; 
        i++; 
    }

    for(int j = i - 1; j >= 0; j--){
        printf("%d", binaryNum[j]); 
    }
}
int main(){
    int decimalNum;
    printf("Set decimal number: \n");
    scanf("%d",&decimalNum);

    binary(decimalNum);
}