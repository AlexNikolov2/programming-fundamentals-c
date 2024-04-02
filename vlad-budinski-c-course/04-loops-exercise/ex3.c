#include <stdio.h>

int main(){
    int n;
    printf("set n: \n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
        
    }
    
    
}