#include <stdio.h>
#include <math.h>

int calc_nth_term(int a, int n, int d){
    int nth_term;

    for(int i = 0; i < n; i++){
        nth_term = a + (n - 1) * d;
    }

    return nth_term;
}
    
int main(){
    int start, numbers, difference;
    printf("Set starting number of the sequence \n");
    scanf("%d",&start);
    printf("Set total numbers of the sequence \n");
    scanf("%d",&numbers);
    printf("Set difference between the numbers: \n");
    scanf("%d",&difference);

    int nth_term = calc_nth_term(start, numbers, difference);
    printf("Nth num is: %d\n", calc_nth_term(start,numbers,difference));

    int sum_sequence = (start + nth_term) * (numbers / 2);

    printf("Sum of the sequence is: %d\n", sum_sequence);
}