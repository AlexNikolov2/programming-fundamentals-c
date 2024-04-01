#include <stdio.h>

int main(){
    int day,month,year;

    printf("Set day: \n");
    scanf("%d",&day);
    printf("Month: \n");
    scanf("%d",&month);
    printf("Year: \n");
    scanf("%d",&year);

    printf("Date: 0x%X/0x%X/0x%X", day,month,year);

    return 0;
}
