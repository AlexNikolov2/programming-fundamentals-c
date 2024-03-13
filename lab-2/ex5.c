#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int dayOfWeek(int day, int month, int year){
    int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
    year -= month <3;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

void printDay(int weekday){
    switch (weekday){
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;      
        default:
            printf("Invalid day");         
    }

}

int main() {
    int day, month, year;
    

    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    int weekday = dayOfWeek(day, month, year);
    printf("The day of the week for %d-%d-%d is ", day, month, year);
    printDay(weekday);
    printf("\n");

    printf("Days on the same day of the week from previous years:\n");
    for (int i = year - 1; i >= 1; i--) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) { 
            int daysInYear = 366;
            weekday = (weekday - 2 + daysInYear) % 7;
        } else {
            int daysInYear = 365;
            weekday = (weekday - 1 + daysInYear) % 7;
        }
        printf("%d-%02d-%02d: ", day, month, i);
        printDay(weekday);
        printf("\n");
    }

}