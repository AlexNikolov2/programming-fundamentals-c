#include <stdio.h>

int find_min_num(int num, int min_num){
    if(num < min_num){
        return num;
    }
    return min_num;
}

int find_max_num(int num, int max_num){
    if(num > max_num){
        return num;
    }
    return max_num;
}

int main(){
    int num, min_num, max_num;

    printf("Enter numbers (0 to end): \n");

    scanf("%d", &num);
    min_num = max_num = num;

    while(num != 0){
        scanf("%d", &num);

        if(num != 0){
            min_num = find_min_num(num, min_num);
            max_num = find_max_num(num, max_num);
        }
    }

    printf("Min num: %d \n", min_num);
    printf("Max num: %d \n", max_num);

    return 0;
}
