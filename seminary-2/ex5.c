#include <stdio.h>

void calc_time(int a, int b, int c){
    int calced = a + b + c;

    float min = (float)calced / 60;
    int mins = (int)min;
    int secs = (int)((min - mins) * 60);

    printf("Moyenne: %d:%d\n", mins, secs);
}
int main(){

    int a,b,c;

    printf("set time a: \n");
    scanf("%d",&a);
    printf("set time b: \n");
    scanf("%d",&b);
    printf("set time c: \n");
    scanf("%d",&c);

    calc_time(a,b,c);

    return 0;
    
}