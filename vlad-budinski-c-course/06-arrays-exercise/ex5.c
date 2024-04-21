#include <stdio.h>

int main() {
    int i, n, temp, size;
    printf("Set size: \n");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++) {
        int val;
        printf("Set value: \n");
        scanf("%d", &val);
        arr[i] = val;
    }

    printf("Set n: \n");
    scanf("%d", &n);

    for (int j = 0; j < n; j++) { 
        temp = arr[0];
        for (i = 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }
        arr[size - 1] = temp;
    }

    for (i = 0; i < size; i++) { 
        printf("%d ", arr[i]);
    }
    return 0;
}