#include <stdio.h>


float average(float temperature[7]){
    float sum = 0;
    for(int i=0; i<7; i++){
        sum += temperature[i];
    }
    float avg = sum / 7;
    return avg;
}

float coldest(float temperature[7]){
    float lowest = -273.0;
    for(int i=0; i<7; i++){
        if(temperature[i] < lowest){
            lowest = temperature[i];
        }
    }
    return lowest;
}

float hottest(float temperature[7]){
    float highest = 100.0;
    for(int i=0; i<7; i++){
        if (temperature[i] > highest){
            highest = temperature[i];
        }
    }
    return highest;
}


int main(){
    float temperature[7];
    for(int i=0; i<7; i++){
        float value;
        printf("Temperature for day %d: ", i+1);
        scanf("%f", &value);
        temperature[i] = value;
    }
    float avg = average(temperature);
    float coldest_day = coldest(temperature);
    float hottest_day = hottest(temperature);

    printf("Average Temperature: %.2f\n", avg);
    printf("Hottest Temperature: %.2f\n", hottest_day);
    printf("Coldest Temperature: %.2f\n", coldest_day);

    return 0;
}