#include <stdio.h>
#include <math.h>

int main(){
    int x1,x2,y1,y2;
    printf("Set point A: \n");
    scanf("%d %d",&x1, &y1);
    printf("Set point B: \n");
    scanf("%d %d", &x2, &y2);

    float distance = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));

    printf("Distance: %f\n", distance);
}