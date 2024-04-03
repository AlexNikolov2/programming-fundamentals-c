#include <stdio.h>
#include <math.h>
#define SETS 3 

float simple_interest(float principal, float rate, int time) {
    return (principal * rate * time) / 100;
}

float compound_interest(float principal, float rate, int time) {
    return principal * (pow((1 + rate / 100), time)) - principal;
}

int main() {
    float data[SETS][2];
    int time = 10;

    for (int i = 0; i < SETS; i++) {
        printf("Enter principal amount for set %d: ", i + 1);
        scanf("%f", &data[i][0]);
        printf("Enter rate of interest for set %d: ", i + 1);
        scanf("%f", &data[i][1]);
    }

    printf("\nResults for a time period of 10 years:\n");
    for (int i = 0; i < SETS; i++) {
        printf("\nSet %d:\n", i + 1);
        float simple = simple_interest(data[i][0], data[i][1], time);
        float compound = compound_interest(data[i][0], data[i][1], time);
        printf("Simple Interest: %.2f\n", simple);
        printf("Compound Interest: %.2f\n", compound);
    }

    return 0;
}