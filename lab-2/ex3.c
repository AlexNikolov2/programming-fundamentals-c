#include <stdio.h>
#include <stdlib.h>

int main(){
     int num1, num2, num3;
    printf("Set 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    int biggest = num1;
    if (num2 > biggest) {
        biggest = num2;
    }
    if (num3 > biggest) {
        biggest = num3;
    }

    int middle = num1 + num2 + num3 - smallest - biggest;

    printf("Numbers in descending order: %d %d %d\n", biggest, middle, smallest);

    return 0;
    
}