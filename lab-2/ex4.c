#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int sum = 0;

    printf("set array length:");
    scanf("%d",&n);
    int arr[n];
    printf("Set number:");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Biggest number is: %d\n", arr[0]);
    printf("Smallest number is: %d\n", arr[n-1]);
    int amplitude = arr[0] - arr[n-1];
    printf("Amplitude is: %d\n", amplitude);

    float avg = sum / n;
    printf("Average value: %.2f\n", avg);
}