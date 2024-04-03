#include <stdio.h>
#include <stdlib.h>

int sum(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += arr[i];
    }
    return sum;
}

int return_biggest(int arr[]) {
    int max_num = -5000;
    for (int i = 0; i < 7; i++) {
        if (arr[i] > max_num) {
            max_num = arr[i];
        }
    }
    return max_num;
}

float average(int arr[]) {
    int total = sum(arr);
    float avg = (float)total / 7;
    return avg;
}

int closest_to_avg(int arr[]) {
    float avg = average(arr);
    int closest = arr[0];
    float min_diff = abs(arr[0] - avg);

    for (int i = 1; i < 7; i++) {
        float diff = abs(arr[i] - avg);
        if (diff < min_diff) {
            min_diff = diff;
            closest = arr[i];
        }
    }
    return closest;
}

int main() {
    int array[7];
    int num;
    
    for (int i = 0; i < 7; i++) {
        printf("Enter num: ");
        scanf("%d", &num);
        if (num > -5000 && num < 5000) {
            array[i] = num;
        } else {
            printf("Number must be between -5000 and 5000. Please try again.\n");
            i--;
        }
    }

    int sum_result = sum(array);
    float avg_result = average(array);
    int return_biggest_result = return_biggest(array);
    int closest_avg_result = closest_to_avg(array);
    printf("Sum: %d\n", sum_result);
    printf("Avg: %.2f\n", avg_result);
    printf("Max num: %d\n", return_biggest_result);
    printf("Closest: %d\n", closest_avg_result);
    return 0;
}