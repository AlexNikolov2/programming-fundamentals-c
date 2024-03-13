#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Set a num: \n");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
}