#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sort(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
    int min_num;
}

int main(){
    int nums[10];

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    int min_num = nums[0];
    for(int j = 0; j < 10; j++){
        if(nums[j] < min_num){
            min_num = nums[j];
        }
    }
    printf("%d: ", min_num);
}