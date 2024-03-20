#include <stdio.h>
#include <stdlib.h>

void swapByValue(int a, int b){
    int temp;
    printf("Before by value: %d %d \n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After by value: %d %d \n",a,b);

}
void swapByReference(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    printf("Set a and b: \n");
    scanf("%d %d",&a,&b);

    printf("Before by reference: %d %d \n",a,b);
    swapByValue(a,b);
    swapByReference(&a, &b);
    printf("After by reference: %d %d \n",a,b);
}