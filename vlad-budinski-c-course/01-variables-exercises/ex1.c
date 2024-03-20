#include <stdio.h>
#include <math.h>

int main(){
    int start, numbers, difference;
    printf("Set starting number of the sequence \n");
    scanf("%d",&start);
    printf("Set total numbers of the sequence \n");
    scanf("%d",&numbers);
    printf("Set difference between the numbers: \n");
    scanf("%d",&difference);
    int nth_term;

    for(int i = 0; i < numbers; i++){
        nth_term = start + (numbers - 1) * difference;
    }

    printf("Nth num is: %d\n", nth_term);
}