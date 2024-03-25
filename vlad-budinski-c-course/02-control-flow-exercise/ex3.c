#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    printf("Set point: \n");
    scanf("%d %d",&x,&y);

    if(x > 0 && y > 0){
        printf("First quadrant");
    }
    else if(x < 0 && y > 0){
        printf("Second quadrant");
    }
    else if(x < 0 && y < 0){
        printf("Third quadrant");
    }
    else{
        printf("Fourth quadrant");
    }
}