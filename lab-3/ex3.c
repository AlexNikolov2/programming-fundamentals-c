#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main(){
    int count = 0;
    int num = 2;
    while(count <= 50){
        if(is_prime(num)){
             printf("%d \n", num);
            count++;
        }
        num++;
    }
    printf("\n");
}