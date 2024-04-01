#include <stdio.h>

int average(int sum, int count) {
    int avg = sum / count;

    return avg;
}
int main(){
    int grade;
    int count = 0;
    int sum = 0;
    printf("Set grade \n");
    scanf("%d",&grade);

    while(grade >= 2 && grade <= 6){
        count++;
        sum += grade;

        printf("Set grade \n");
        scanf("%d",&grade);

        
    }

    int average_sum = average(sum, count);

    printf("%d grades, %.2f average", count, (float)sum / count);
}