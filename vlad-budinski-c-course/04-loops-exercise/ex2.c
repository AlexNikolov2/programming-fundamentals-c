#include <stdio.h>

int main(){
    int num;
    int multiplier;
    printf("Set num: \n");
    scanf("%d",&num);
    printf("Set multiplier limit: \n");
    scanf("%d",&multiplier);

    for (int i = 0; i <= multiplier; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
}