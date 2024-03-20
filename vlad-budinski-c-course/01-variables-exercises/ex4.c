#include <stdio.h>

int main(){
    int speed, distance;
    printf("Speed: \n");
    scanf("%d",&speed);
    printf("Distance: \n");
    scanf("%d",&distance);

    float time_hours = (float)distance / speed;
    printf("%.2f hours\n", time_hours);
    float time_minutes;
    if(time_hours > 1){
        time_minutes = (time_hours - (int)time_hours) * 60;
    }
    else{
        time_minutes = time_hours * 60;
    }
    
    printf("Time: %.0f:%.0f minutes \n", time_hours, time_minutes);

}