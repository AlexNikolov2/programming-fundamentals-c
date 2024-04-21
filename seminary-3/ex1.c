#include <stdio.h>

int main() {
    int size;
    printf("Set size:\n");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        int value;
        printf("Set value:\n");
        scanf("%d", &value);
        arr[i] = value;
    }

    int longest_rising = 1; 
    int current_rising = 1; 
    int longest_rising_start = 0;
    int longest_falling = 1; 
    int current_falling = 1; 
    int longest_falling_start = 0; 

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i - 1]) {
            current_rising++;
            if (current_rising > longest_rising) {
                longest_rising = current_rising;
                longest_rising_start = i - longest_rising + 1;
            }

            current_falling = 1;
        } else if (arr[i] < arr[i - 1]) {
            current_falling++;
            if (current_falling > longest_falling) {
                longest_falling = current_falling;
                longest_falling_start = i - longest_falling + 1;
            }

            current_rising = 1;
        } else {
            current_rising = 1;
            current_falling = 1;
        }
    }

    printf("Longest rising sequence length: %d\n", longest_rising);
    printf("Longest rising sequence numbers: ");
    for (int i = longest_rising_start; i < longest_rising_start + longest_rising; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Longest falling sequence length: %d\n", longest_falling);
    printf("Longest falling sequence numbers: ");
    for (int i = longest_falling_start; i < longest_falling_start + longest_falling; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}