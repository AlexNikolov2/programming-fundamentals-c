#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Set num: \n");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++){
        sum += i;
        
    }
    printf("%d", sum);
}