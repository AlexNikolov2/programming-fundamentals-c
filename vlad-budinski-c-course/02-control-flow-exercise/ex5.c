#include <stdio.h>
#include <stdlib.h>

int main(){
    int seconds_num;

    printf("Set seconds: \n");
    scanf("%d",&seconds_num);

    int hours = seconds_num / 3600;
    int minutes = (seconds_num - hours * 3600) / 60;
    int seconds = (seconds_num - hours * 60) % 60;

    if(hours < 10){
        printf("0");
    }
    printf("%d : ", hours);

    if(minutes < 10){
        printf("0");   
    }
    printf("%d : ", minutes);
    
    if(seconds < 10){
        printf("0"); 
    }
    printf("%d\n", seconds);
}