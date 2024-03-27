#include <stdio.h>
#include <stdlib.h>


int is_prime(int num) {
    if (num <= 1) return 0; 
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}

int main(){
    int n;

    printf("Set n: \n");
    scanf("%d",&n);

    int count = 0;
    int num = 2;

    printf("First %d prime numbers are: \n", n);

    int *pointer_count = &count;
    int *pointer_num = &num;
    while (*pointer_count < n) {
        if (is_prime(*pointer_num)) {
            printf("%d \n", *pointer_num);
            (*pointer_count)++;
        }
        (*pointer_num)++;
    }

    
}