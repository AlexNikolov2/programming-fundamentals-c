#include <stdio.h>

int main(){
    int hours_salary, hours_worked;

    printf("Print salary per hour: \n");
    scanf("%d", &hours_salary);
    printf("Set work hours per month: \n");
    scanf("%d", &hours_worked);

    int total_salary = hours_worked * hours_salary;
    printf("Month salary: %d\n", total_salary);
}