#include <stdio.h>

int main(){
    int choice;
    printf("1 or 2? \n");
    scanf("%d", &choice);

    if(choice == 1){
        printf("You get one million dollars!");
    }
    else{
        float cash = 0.01;
        int days;
        int count = 0;
        printf("Set days \n");
        scanf("%d", &days);
        while(count < days){
            cash = cash * 2;
            count++;
        }
        printf("You get %f money", cash);
    }
}